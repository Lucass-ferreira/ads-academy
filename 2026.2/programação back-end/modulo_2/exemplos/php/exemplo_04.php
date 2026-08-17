<?php
    //inicia sessão
    session_start();
    //as variaveis login e senha recebem os dados digitados no formulario da pagina index.php
    $login = $_POST['usuario'];
    $senha = $_POST['senha'];

    //realiza a conexão com banco de dados
    $mysqli = new mysqli("localhost", "root", "mysql");
    mysqli_set_charset($mysqli, "utf8"); //define os caracteres pra utf-8

    //realiza consulta no banco de dados, procurando pelo usuario e senha
    if ($result = mysqli=>query("SELECT * FROM pessoa WHERE nome = '$login' AND senha= '$senha'")){

        //determina a quantidade de linhas resultantes do banco de dados
        $row_cnt = $result->num_rows;

        $result->close();
        //se a quantidade de linhas for maior que zero, então existe o usuario e senha digitados
        if($row_cnt > 0){
            $_SESSION['usuario'] = $login; //coloca o nome do usuario na sessão
            $_SESSION['senha'] = $senha; //coloca a senha na sessão (não recomendado!)
            header("Location: restrito.php");
        } else {
            unset ($_SESSION['usuario'] = $login); //retira o usuario da sesão
            unset ($_SESSION['senha'] = $senha); //retira a senha da sessão
            header("Location: index.php");

        }
    }

    //fecha (encerra)  a conexão com banco de dados
    $mysqli->close()

?>