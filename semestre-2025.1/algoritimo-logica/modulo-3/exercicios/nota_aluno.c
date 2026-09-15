#include <stdio.h>
#include <stdbool.h>

float nota1, nota2, nota3, nota4; //variaveis no escopo global

//função para obter as quatro notas

void entradaNotas(){

    for(int controle = 1; controle <= 4; controle++){
        printf("\n Informe a nota %d ", controle);

        switch (controle){
            case 1: 
                scanf("%f", &nota1 );
                break;
            case 2:
                scanf("%f", &nota2 );
                break;
            case 3:
                scanf("%f", &nota3 );
                break;
            case 4:
                scanf("%f", &nota4 );
                break;
        }
    }
}

//função para obter o usuario.

bool entradaOpcao(){
    
    int opcaoDigitada;
    int digitacaoOK = 1;

    printf("\n Voce deseja calcular outra media? (1-Sim / 0-Nao): ");

    while(digitacaoOK == 1){
        scanf("%d", &opcaoDigitada); // le do teclado a opcao

        if (opcaoDigitada == 1 || opcaoDigitada == 0){
            digitacaoOK = 0;
        } else {
            digitacaoOK = 1;
            printf("\n Opcao invalida (Deve ser 1-Sim 0-Nao): %d", opcaoDigitada);
        }
    }

    if(opcaoDigitada == 1){
        return true;
    } else {
        return false;
    }
}

// funçao principal do programa

int main(void){

    float media, mediaTurma;
    float acumulaMedia = 0;
    int qtdAluno = 0;
    bool continuaProcessamento = true;

    while(continuaProcessamento){
        entradaNotas();

        media = (nota1 + nota2 + nota3 + nota4)/4;

        printf("\n ---------------------------");
        acumulaMedia = acumulaMedia + media;
        qtdAluno = qtdAluno + 1;

        if(media >= 7.0){
            printf("\n Esse aluno foi APROVADO com media %.2f", media);
        } else {
            printf("\n Esse aluno foi REPROVADO com media %.2f", media);
        };

        continuaProcessamento = entradaOpcao();
    }

    mediaTurma = acumulaMedia / qtdAluno;

    printf("\n ------------------------------");
    printf("\n A media da turma foi %.2f", mediaTurma);
    printf("\n Obrigado por usar o sistema!");

    return 0;
};

