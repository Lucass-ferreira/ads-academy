/*
quadrado.cpp : calcula o quadrado de um número inteiro
Escrito por nome do autor - Lucas Ferreira
Data: 12/março/2025 - Versão 1.0
*/
#include <stdio.h> //Definição de diretivas de biblioteca para printf e scanf
#include <conio.h> //Definição de biblioteca para getch
int main( ) //Função principal
{
  int num, quad; //Definição de variáveis
  printf ("Digite um valor inteiro "); //Mensagem que aparece em tela
  scanf ("%d", &num); //Guarda valor digitado
  quad = num * num; //Calcula o quadrado do número
  printf ("O quadrado de %d = %d\n", num, quad); //Apresenta o resultado em tela
  printf("Pressione qualquer tecla para finalizar"); //Mensagem em tela
  getch( ); //Aguarda pressionar uma tecla
}