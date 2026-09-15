#include <stdio.h>

int main(){

    int iValor = 0;
    iValor++; // neste momenro Ivalor = 1
    // é o mesmo que: 
    // int iValor = 0;
    // int iValor = iValor + 1; //Neste momento ivalor = 1

    int dValor = 10; 
    dValor--; //  neste momento dValor = 9
    // é o mesmo que: 
    // int dValor = 10;
    // dValor = dValor - 1; //Neste momento dValor = 9

    printf("iValor = %d\n", iValor);
    printf("dValor = %d\n", dValor);

    return 0;
}