#include <stdio.h>

// int main(void){

//     float notas[4] = {4.5, 5.0, 4.0, 6.0};
//     float soma = 0;

//     for (int indice = 0; indice < 4; indice++){ //Laço de repetição para acessar as 4 posições do vetor
//         soma = soma + notas[indice];
//     }
//     printf("\n A media das notas eh: %.2f / 4 = %.2f\n\n", soma, (soma / 4));

//     return 0;
// }

//mesmo exemplo, mas de forma dinamica. Pegando as notas digitadas pelo o usuario.

int main(void)
{
    float notas[4]; // vetor para receber as notas digitadas
    float soma = 0;

    printf("\nExemplo de inicializacao dinamica de vetor");
    printf("\n*----------------------------------------*");

    for(int indice1 = 0; indice1 < 4; indice1++)
    {
        printf("\nInforme a nota %d = ", indice1 + 1);
        scanf("%f", &notas[indice1]);
    }

    for(int indice2 = 0; indice2 < 4; indice2++)
    {
        soma = soma + notas[indice2];
    }

    printf("\nA media das notas eh: %.2f\n\n", (soma / 4));

    return 0;
}
