#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //mecanica logica variaveis//

    srand(time(0));
    int numero_grande = rand();
    int chute;
    int numero_secreto = numero_grande % 101;
    int tentativas;
    int nivel;
    int i;
    double pontos = 1000;
    int maior;
    int menor;
    int acertou;
    int derrota;

    //jogo//

    printf("********Bem vindo ao jogo da adivinhação!********\n");
    printf("Selecione o nível:\n");
    printf("|1 - FÁCIL | 2 - MÉDIO | 3 - DIFÍCIL|\n");
    scanf("%d", &nivel);

    switch (nivel)
    {
    case (1):
        tentativas = 15;
        printf("Você selecionou o modo fácil com %d tentativas!\n", tentativas);
        break;
    case (2):
        tentativas = 10;
        printf("Você selecionou o modo médio com %d tentativas!\n", tentativas);
        break;
    case (3):
        tentativas = 5;
        printf("Você selecionou o modo difícil com %d tentativas!\n", tentativas);
        break;
    
    default:
        tentativas = 1000;
        printf("Você selecionou o modo randômico com %d tentativas!\n", tentativas);


        break;
    }

    for(i = 1; i <= tentativas; i++)
    {
        
        printf("Tentativa %d de %d\n", i,tentativas);
        printf("Sua pontuação é: %.0lf\n", pontos);
        

        printf("Chute um número aleatório de 1 a 100: \n");
        scanf("%d", &chute);
        maior = chute > numero_secreto;
        menor = chute < 1;
        acertou = chute == numero_secreto;

        if(acertou)
        {
            printf("Parabéns, você ganhou o jogo da adivinhação! \n");
            printf("Você ganhou o jogo em %d tentativa(s)! \n", i);
            printf("Sua pontuação final foi: %.0lf\n", pontos);
            break;
        }
        if(maior)
        {
            if(chute > 100)
            {
                printf("O chute não pode ser maior que 100\n");
            }
        
            else
            {
            printf("O chute foi maior que o número secreto\n");
            }
       
        }
        else
        {
            if(menor)
            {
                printf("O chute não pode ser menor que um!\n");
            }
            else{
            printf("O chute foi menor que o número secreto!\n" );
            }
        }
        pontos = pontos - 30;
    }
     derrota = i > tentativas;

     if(derrota)
        {
            printf("\nFim de jogo, você utilizou todas as tentativas!\n");
            printf("\nMUAAHAHAHAHAHAHAHAH Sua pontuação é ZERO!\n");
            printf("\nTente novamente! Boa sorte!\n");
        }
}
