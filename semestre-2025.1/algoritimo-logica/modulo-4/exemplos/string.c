//quatidade de bytes alocado em uma string.
#include <stdio.h>

// int main(void) {
//     printf("\n Programa para mostrar tamanho da string");
//     printf("\n *----------------------------------*");
//     printf("\n Espaco alocado = %d bytes\n\n", sizeof("azul e branco"));
// }

//funções para manipular strings
#include <string.h> // necessário para strcpy

// int main(void){

//   char nome[15];
//   strcpy(nome, "Fulano de Tal"); // strcpy copia a string
//   // strcpy(string_destino, string_origem);
//   // note que a string de destino é nome
//   // E a string de origem é "Fulano de Tal"

//   printf("\n Exemplo de copia de string");
//   printf("\n *--------------------------");
//   printf("\n Nome = %s", nome);
//   printf("\n O tamanho da string 'nome' eh: %i\n\n", strlen(nome)); // strlen diz o tamanho da string

//   return 0;
// }

// coparação entre duas strings
int main(){
    char *str1 = "banana2";
    char *str2 = "banana1";
    int ret;

    printf("\n Manipulacao de String : Comparacao entre 2 strings");
    printf("\n *----------------------------------------------------*\n");
    printf("\n A primeira string eh: %s", str1);
    printf("\n A segunda string eh: %s\n", str2);

    ret = strncmp(str1, str2, 6); // strncmo compara as duas strings
    // 6 é o tamanho que será feita a checagem das strings

    if (ret > 0){
        printf("\n Primeira String eh maior\n\n");
    } else if (ret < 0) {
        printf("\n Segunda String eh maior\n\n");
    } else {
        printf("\n As duas palavras sao iguais\n\n");
    }

    return 0;
}


