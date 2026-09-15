#include <stdio.h>
int main(){

  float nota1, nota2, media;

  printf("\n Informe a primeira nota: ");
  scanf("%f", &nota1);

  printf("\n Informe a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  if ( media >= 7.0 )
    printf("\n Aluno Aprovado!");
  else
    printf ("\n Aluno Reprovado!");

  return 0;
}