#include <stdio.h>

int main(void){

    for(int contador= 1; contador <= 100; contador++){
        printf("\n Valor de contador = %d", contador);

        if (contador == 10)
            break;
    }

    printf("\n\n"); // apenas para estilização no terminal

    return 0;
}