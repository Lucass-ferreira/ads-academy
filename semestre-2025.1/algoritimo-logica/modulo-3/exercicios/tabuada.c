#include <stdio.h>

int entradaDados()
{
	int numeroEntrada;
	printf("\n Informe o numero base para tabuada: ");
	scanf("%d", &numeroEntrada);

    return numeroEntrada; // Retorna o valor digitado pelo usuario
}

int main(void){

    int numeroDigitado = entradaDados();

    if (numeroDigitado < 1 || numeroDigitado > 10) {
	    printf("\nNumero Informado eh invalido (Fora do Intervalo 1-10)\n");
        return 0;
	}

	printf("\n *-------------------------------------*");
	printf("\n Voce selecionou a tabuada do %d", numeroDigitado);
	printf("\n *-------------------------------------*");

    for(int controle = 0; controle <= 10; controle++){
        printf("\n %d x %d = %d", controle, numeroDigitado, numeroDigitado * controle);
    };
	
	return 0;
}