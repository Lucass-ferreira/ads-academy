#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//função com retorno de valor tipo booleano
bool verificaPar(int numero){
    if (numero % 2 == 0) {
        return true; //retorna true, indica que o valor é par
    } else {
        return false; //retorna false, indica que o valor é impar
    }
}

int main(void){
    int numeroEntrada = 2;

    if (verificaPar(numeroEntrada)){
        printf("\n OK Era esperado PAR!\n\n");
    } else {
        printf("\n Nao retornou par. Vou cancelar o programa!!!\n\n");
        exit(1); //termina o programa neste ponto
    }

    return 0;
}