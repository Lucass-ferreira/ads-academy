#include <stdio.h>

int main(void){
	int soma = 20 + 30;
	int * somaParcial = &soma;
	printf("\n Teste de utilizacao de uso de Ponteiros");
	printf("\n *---------------------------------------*");
	printf("\n Valor da variavel 'soma'= %d", soma);
	printf("\n valor da variavel *SomaParcial = %d", * somaParcial);
	return 0;
}