#include <stdio.h>

int main(void){

    printf("\n Exemplo de estrutura de repeticao do-while");
    printf("\n *--------------------------------------*");

    int contador = 0;
    do{
        contador++;
        printf("\n O valor do contador eh = %d", contador);
    } while (contador < 10);

    printf("\n *--------------------------------------");
    printf("\n Valor do contador na saida do laco = %d", contador);

    return 0;
    
}
	