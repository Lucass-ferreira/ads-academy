	#include <stdio.h>

	int main(void)
	{
	    int idade;

	    printf("\n Entre com a Idade: ");
	    scanf("%d", &idade);

	    if (idade >= 0 && idade < 16)
	        printf("\n Eh uma Criança");
	    else if (idade >= 16 && idade < 22)
	        printf("\n Eh um Adolescente");
	    else if (idade >= 22 && idade < 60)
	        printf("\n Eh um Adulto");
	    else
	        printf("\n Eh terceiro Idade");

	    printf("\n Este comando esta fora da cadeia de ifs");
        printf("\n\n"); // apenas estilização no terminal

	    return 0;
	}