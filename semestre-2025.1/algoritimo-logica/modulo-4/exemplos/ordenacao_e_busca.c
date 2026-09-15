// Ordenação por Troca
#include <stdio.h>

// int main(void){
//     int vetor[5] = {76, 63, 46, 14, 2}; // Vetor sem classificação
//     int limite = 5;

//     printf("\n ---------------------------------------");
//     printf("\n Vetor original (Antes da classificacao)");
//     printf("\n ---------------------------------------");

//     for (int w = 0; w < limite; w++){
//         printf("\n vetor[%d] = %d", w, vetor[w]);
//     }

// // Aqui começa a classificação por TROCA (bubble sort)
// for (int i = 1; i < limite; i++){
//     for (int k = limite - 1; k >= i; k--){
//         if (vetor[k - 1] > vetor[k]){
//             int aux = vetor[k - 1]; // Neste ponto efetua-se a TROCA
//             vetor[k - 1] = vetor[k];
//             vetor[k] = aux;
//         }
//     }
// } // Aqui termina a classificação por TROCA

// printf("\n -----------------------------");
// printf("\n Vetor Classificado por TROCA");
// printf("\n -----------------------------");

//   for (int z = 0; z < limite; z++)
//   {
//     printf("\n vetor[%d] = %d", z, vetor[z]);
//   }

//   return 0;
// }

//Ordenação por Seleção

// int main(void){
//     int vetor[5] = {76, 63, 46, 14, 2};
//     int limite = 5;
//     int exchange = 0;

//     printf("\n ---------------------------------------");
//     printf("\n Vetor original (Antes da classificacao)");
//     printf("\n ---------------------------------------");

// for (int w = 0; w < limite; w++){
//     printf("\n vetor[%d] = %d", w, vetor[w]);
// }

// // Aqui começa a classificação por seleção
// for (int i = 0; i < limite - 1; i++){
//     exchange = 0;
//     int c = i;
//     int aux = vetor[i];

//     for (int j = i + 1; j < limite; j++){
//         if (vetor[j] < aux){
//             c = j;
//             aux = vetor[j];
//             exchange = 1;
//         }
//     }

//     if (exchange){
//         vetor[c] = vetor[i];
//         vetor[i] = aux;
//     }
// }

//     printf("\n -------------------------------");
//     printf("\n Vetor Classificado por SELECAO");
//     printf("\n -------------------------------");

//     for (int z = 0; z < limite; z++){
//         printf("\n vetor[%d] = %d", z, vetor[z]);
//     }

//     return 0;
// }


//Ordenação por Inserção

// int main(void){
//     int vetor[5] = {76, 63, 46, 14, 2};
//     int limite = 5;

//     printf("\n ---------------------------------------");
//     printf("\n Vetor original (Antes da classificacao)");
//     printf("\n ---------------------------------------");

//     for (int w = 0; w < limite; w++){
//         printf("\n vetor[%d] = %d", w, vetor[w]);
//     }

//     // Aqui começa a ordenação por INSERÇÃO
//     for (int i = 1; i < limite; i++){
//         int aux = vetor[i];
//         int j;

//         for (j = i - 1; j >= 0 && aux < vetor[j]; j--){
//             vetor[j + 1] = vetor[j];
//         }

//         vetor[j + 1] = aux;
//     } // fim da ordenação por inserção

//     printf("\n -------------------------------");
//     printf("\n Vetor Classificado por INSERCAO");
//     printf("\n -------------------------------");

//     for (int z = 0; z < limite; z++){
//         printf("\n vetor[%d] = %d", z, vetor[z]);
//     }

//     return 0;
// }

//Quicksort

int vetor[5] = {76, 63, 46, 14, 2};
int limite = 5;

void qs(int *vetor, int left, int right) {
    int i, j;
    int x, y;
    i = left;
    j = right;
    x = vetor[(left + right) / 2];

    do {
        while (vetor[i] < x && i < right) i++;
        while (x < vetor[j] && j > left) j--;
        if (i <= j) {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j) qs(vetor, left, j);
    if (i < right) qs(vetor, i, right);
}

void quick(int *vetor, int count) {
    printf("\n ---------------------------------------");
    printf("\n Vetor original (Antes da classificacao)");
    printf("\n ---------------------------------------");
    for (int z = 0; z < limite; z++){
        printf("\n vetor[%d] = %d", z, vetor[z]);
    }

    qs(vetor, 0, count - 1);
}

int main(void) {
    quick(vetor, 5);

    printf("\n -------------------------------");
    printf("\n Vetor Classificado QUICKSORT ");
    printf("\n -------------------------------");

    for (int z = 0; z < limite; z++){
        printf("\n vetor[%d] = %d", z, vetor[z]);
    }

    return 0;
}



