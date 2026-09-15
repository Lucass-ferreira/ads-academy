//Primeira Forma – Declarado como uma matriz
#include <stdio.h>

// void imprimeValores(int valores[5]){
//     for (int controle = 0; controle < 5; controle++){
//         printf("\n Valor da ocorrencia %d = %d", controle, valores[controle]);
//     }
// }

// int main(void){
//     printf("\n *Exemplo parametro declarado como MATRIZ*");
//     printf("\n *---------------------------------------*");
  
//     int valoresOriginais[5] = {50, 40, 30, 20, 10};
//     imprimeValores(valoresOriginais);

//     return 0;
// }

//Segunda Forma – Especificado como matriz sem dimensão

// void imprimeValores(int valores[]){ // matriz sem dimensão ou seja sem tamanho declarado nos colchetes
//     for (int controle = 0; controle < 5; controle++){
//         printf("\n Valor da ocorrencia %d = %d", controle, valores[controle]);
//     }
// }

// int main(void){
//     printf("\n *Exemplo parametro declarado como MATRIZ sem dimensao*");
//     printf("\n *----------------------------------------------------*");

//     int valoresOriginais[5] = {501, 401, 301, 201, 101};
//     imprimeValores(valoresOriginais);

//     return 0;
// }

//Terceira Forma – Declarado como um ponteiro

void imprimeValores(int *valores){ // matriz como ponteiro, ou seja sem colchetes, apenas asterisco
    for (int controle = 0; controle < 5; controle++){
        printf("\n Valor da ocorrencia %d = %d", controle, valores[controle]);
    }
}

int main(void){
    printf("\n *Exemplo parametro declarado como PONTEIRO*");
    printf("\n *----------------------------------------------------*");

    int valoresOriginais[5] = {511, 411, 311, 211, 111};
    imprimeValores(valoresOriginais);

    return 0;
}
