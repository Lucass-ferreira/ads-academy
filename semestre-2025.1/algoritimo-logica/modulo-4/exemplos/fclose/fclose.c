#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // criando a variável ponteiro para o arquivo
    FILE *file;

    // abrindo o arquivo
    file = fopen("//caminho que voçê quer criar o arquivo", "w");
    

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(file, "Esta é a linha 1 do arquivo\n");
    fprintf(file, "Esta é a linha 2 do arquivo\n");
    fprintf(file, "Esta é a linha ... do arquivo\n");
    fprintf(file, "Esta é a linha n do arquivo\n");

    // fechando arquivo
    fclose(file);

    // mensagem para o usuário
    printf("O arquivo foi criado com sucesso!\n");

    return 0;
}
