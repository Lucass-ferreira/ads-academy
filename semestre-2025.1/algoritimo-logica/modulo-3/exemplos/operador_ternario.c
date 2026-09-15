#include <stdio.h>

// exemplo com if e else.

// int main(void)
// {
// 	int valor, valor2;

//     printf("Informe um valor numerico: ");
//     scanf("%d", &valor);

//     if(valor < 0)
//         valor2 = 0;
//     else
//         valor2 = valor;

//     printf("\n Resolvido com estrutura de if ");
//     printf("\n -----------------------------------------------");
//     printf("\n O valor de valor2 eh: %d \n\n", valor2);

// 	return 0;
// }

// mesmo exemplo de cima, mas com operador ternario.

int main(void)
{
    int valor, valor2;

    printf("Informe um numero: ");
    scanf("%d", &valor);

    valor2 = (valor < 0) ? 0 : valor; //RESOLVIDO EM UMA ÚNICA LINHA

    printf("\n Resolvido com Operador ternario ?");
    printf("\n -----------------------------------------------");
    printf("\n O valor de valor2 eh: %d \n\n ", valor2);

    return 0;
}   