#include <stdio.h>
#include <stdbool.h>

int main(void )
{
    bool cond1, cond2;
    cond1 = true; //vamos supor que cond1 seja VERDADEIRO == 1

    cond2 = false; //vamos supor que cond2 seja FALSO == 0

    if (cond1){ // condição COND-1

        if (cond2) // condição COND-2-1
        {
            printf("Valor de cond1 = %d (BLOCO-2-2) \n", cond1); //BLOCO-2-2
            printf("Valor de cond2 = %d (BLOCO-2-2) \n", cond2); //BLOCO-2-2
        }
        else // falso da Condição COND-2-1
        {
            printf("Valor de cond1 = %d (BLOCO-2-1) \n", cond1); //BLOCO-2-1
            printf("Valor de cond2 = %d (BLOCO-2-1) \n", cond2); //BLOCO-2-1
        };

    } // PONTO DE ENCONTRO P2-1

    else { // falso da Condição COND-1
        printf("Valor de cond1 = %d (BLOCO-1) \n", cond1); // BLOCO-1
    } // PONTO DE ENCONTRO P1-0

    printf("Valor de cond1 = %d (BLOCO-3) \n", cond1); // BLOCO-3;
    printf("Valor de cond1 = %d (BLOCO-3) \n", cond2); //BLOCO-3

    return 0;
}