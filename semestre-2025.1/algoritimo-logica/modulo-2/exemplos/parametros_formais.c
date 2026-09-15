/*
quadrado.cpp : parametros formais
Escrito por nome do autor - Lucas Ferreira
Data: 12/março/2025 - Versão 1.0
*/

#include <stdio.h>
int operaValores(char operacao, int valor1, int valor2)
{
    int resultado = 0;

    if (operacao == 'S')
    {
        resultado = valor1 + valor2;
    } else 
    {
        resultado = valor1 * valor2;
    }
    return resultado;
}
int main(void) {
    int operacao = operaValores('M', 2, 3);
    printf("O valor da Operacao e: %d", operacao);
    return 0;
}