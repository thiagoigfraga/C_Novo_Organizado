#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{

    //mecanica//

    int segundos = time(0);
    srand(segundos);
    int  numero_grande = rand();
    int chute;
    int numero_secreto = numero_grande % 101;
    int tentativas;
    int nivel;
    int i;
    double pontos = 1000;

//jogo//

    printf("Boas vindas ao jogo da adivinhação! \n");
    printf("Selecione o seu nível: \n");
    printf("1 - FÁCIL | 2 - MÉDIO| 3 - DIFÍCIL \n" );
    scanf("%d", &nivel);

 switch(nivel)

    {

        case 1:
            tentativas = 15;
            printf("Você selecionou o modo fácil!\n");
            break;

        case 2:
            tentativas = 8;
            printf("Você selecionou o modo médio!\n");
        break;

        case 3:
            tentativas = 5;
            printf("Você selecionou o modo difícil!\n");

            break;

        default:
            printf("\n Não é uma opção de nível válida! Escreva entre 1 e 3! \n");
            break;
    }

    for(i = 1; i < tentativas; i++) {
        printf("Tentativa %d de %d \n", i, tentativas);
        printf("Chute o seu número: \n");
        scanf("%d", &chute);

        int acertou = chute == numero_secreto;
        int maior = chute > numero_secreto;
        int menor = chute < numero_secreto; 

        if(acertou){
            printf("Parabéns, você venceu o jogo! \n");
            printf("Você ganhou em %d tentativas! \n", i);
            pontos = pontos - (i * 5);
            printf("\n Sua pontuação total foi de %.0lf pontos!", pontos);
            break;
        }
        if(maior){
            printf("O chute foi maior que o número secreto!\n");
        }
        if(menor){
            printf("O chute foi menor que o número secreto!\n");
        }
    
    }
    printf("\n Fim de jogo, tente novamente!\n");
}

