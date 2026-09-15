#include <stdio.h>
#include <stdbool.h>

int vetor[5] = {2, 14, 46, 63, 76};
int limite = 5;

bool buscaBinaria(int *vetor, int limitex, int chave) {
    int low = 0, high = limitex - 1, mid;

    while (low <= high){
        mid = (low + high) / 2;

        if (chave < vetor[mid]){
            high = mid - 1;
        } else if (chave > vetor[mid]){
            low = mid + 1;
        } else {
            return true;
        }
    }

    return false;
}

int main(void){
    int elemento;

    printf("\n Informe o numero: ");
    scanf("%d", &elemento);

    if (buscaBinaria(vetor, limite, elemento)){
        printf("\n O elemento %d foi encontrado no vetor.\n", elemento);
    } else {
        printf("\n O elemento %d NAO foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
