#include <stdio.h>
int main()
{
    int idadeIdosa, idadeJovem, idade;
    idadeIdosa = 18;
    idadeJovem = 60;
    idade = 59;

    if ((idade > idadeIdosa) && (idade < idadeJovem))
    {  //   se isso for V     e     se isso for V
        
        // A meia idade se caracteriza por qualquer pessoa que tenha
        // menos de 60 anos e mais de 17

        printf("A idade informada e de uma pessoa de meia-idade.");
    }
    else
    {
        if (idade >= idadeJovem)
        {
            printf("A idade informada e de uma pessoa idosa.");
        }
        else
        {
            printf("A idade informada e de um jovem.");
        }
    }
    return 0;
}