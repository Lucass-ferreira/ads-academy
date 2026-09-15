#include <stdio.h>

void funcao1(void)
{
    int valor;
    valor = 10;  // valor da função 1
    printf("%d\n", valor);
}

void funcao2(void)
{
    int valor;
    valor = 123; // valor da função 2
    printf("%d\n", valor);

}

int main()
{
    // executando as funçoes.
    funcao1();
    funcao2();
    
    return 0;
}