#include <stdio.h>

int main(void){
    printf("\n Exemplo de estrutura de repeticao for");
    printf("\n*---------------------------------------------------------*");
    printf("\n"); // apenas para estilização do terminal;

    for (int contador = 1; contador <= 10; contador++){
        printf("\n O valor do contador eh = %d", contador);
    };
    
    printf("\n\n"); // apenas para estilização do terminal;

    return 0;
}