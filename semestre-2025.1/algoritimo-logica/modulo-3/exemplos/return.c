#include <stdio.h>
#include <stdbool.h>

//função com retorno de valor tipo booleano
bool verificaPar(int numero){

    if (numero % 2 == 0){
        return true; //retorna true, indica que o valor é par
    } else {
        return false; //retorna false, indica que o valor é impar
    }

}

int main(void){

    int numeroEntrada = 4;

    if (verificaPar(numeroEntrada))
        printf("\nSim. O numero %d eh PAR\n\n", numeroEntrada);
    else
        printf("\nNao. O numero %d wh IMPAR\n\n", numeroEntrada);

    return 0;
}