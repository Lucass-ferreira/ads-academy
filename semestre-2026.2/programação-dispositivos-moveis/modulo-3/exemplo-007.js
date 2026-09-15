var http = require('http')

//criar um objeto servidor
http.createServer(function(req  , res){
    res.write('Ola mundo!'); //escreve uma resposta ao cliente
    res.end(); //finaliza a resposta
}).listen(8080); //o objeto está acessivel na porta 8080"