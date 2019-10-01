#include <stdio.h>
#include <string.h>

int main() {
  
  //variaveis mecanica//

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;
  
  
  
  
  //jogo//

    do { // o loop do faz todo o processo e lá embaixo temos o while //

        for(int i = 0; i < strlen(palavrasecreta); i++) //inicia loop que varre toda a string//
        {
            int achou = 0;
          

            for(int j = 0; j < tentativas; j++) {
                if(chutes[j] == palavrasecreta[i]) {
                    achou = 1;
                    break;
                }
            }
          
          
          
            if(achou) {
                printf("%c ", palavrasecreta[i]);
            } else {
                printf("_ ");
            }
        }
      
      
      printf("\n");

        char chute;
      
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;


    } while (!acertou && !enforcou);

}
