
#include <stdio.h>
int main( )
{
  float nota1, nota2, nota3, nota4, soma;
  printf ("\nDigite primeira nota: ");
  scanf ("%f", &nota1);

  printf ("\nDigite segunda nota: ");
  scanf ("%f", &nota2);

  printf ("\nDigite terceira nota: ");
  scanf ("%f", &nota3);

  printf ("\nDigite quarta nota: ");
  scanf ("%f", &nota4);

  soma = (nota1 + nota2 + nota3 + nota4) / 4;

  printf ("\nSua media e: %.2f\n\n", soma);

  if(soma >= 7){
    printf ("Aluno APROVADO!");
  } else {
    printf ("Aluno REPROVADO!");
  }

  return 0;
}