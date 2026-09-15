#include <stdio.h>

int main(){
    int p, q;

    printf("informe os Estados de 'p' e 'q' Verdadeiro = 1 ou Falso = 0 "); //Solicita dois valores (p) e (q)
    scanf("%d%d", &p, &q); //Recebe os dois valores na mesma linha

    printf("\n-----------------------");
    printf("\n(p)%d E (q)%d resulta %d", p, q, p && q); //Operador booleano E / AND

    printf("\n-----------------------");
    printf("\n(p)%d OU (q)%d resulta %d", p, q, p || q); //Operador booleano OR / OU

    printf("\n-----------------------");
    printf("\n NÃO (p)%d resulta %d", p, !p); //Operador booleano ! = (NOT) (Nega valor de p)

    printf("\n-----------------------");
    printf("\n NÃO (q)%d resulta %d", q, !q); //Operador booleano ! = (NOT) (Nega valor de q)

    printf("\n-----------------------");

    return 0;
}