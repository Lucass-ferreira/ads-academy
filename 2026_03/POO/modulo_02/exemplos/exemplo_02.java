public class Main {            
    public static void main(String[] args) {

        // Criando dois objetos da classe Pessoa: p1 e p2
        Pessoa p1 = new Pessoa();
        Pessoa p2 = new Pessoa();

        // Acessamos os atributos (variáveis internas) utilizando ".":
        // nomeDoObjeto.nomeDoAtributo

        p1.nome = "Mário";
        p1.idade = 40;
        p1.profissao = "cientista";
        p2.nome = "Joana";
        p2.idade = 35 ;
        p2.profissao = "engenheira";

        // Invocamos os métodos de um objeto também usando ".":
        // nomeDoObjeto.nomeDoMetodo(parametros)

        p1.ola();
        p2.ola();
    }
}