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
