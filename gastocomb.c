#include <stdio.h>

int main(){

    int tempo_total,velocidade_media,conta;

    printf("Qual foi o tempo total de duracao da viagem? \n");
    scanf("%d", &tempo_total);
    printf("Qual foi a velocidade média?: \n");
    scanf("%d", &velocidade_media);
    conta = (tempo_total * velocidade_media) / 12.0;
    printf("A quantidade de litros necessaria nessa viagem eh %d litros \n", conta);

}

//Codigo simples que requisita a quantidade necessaria de litros para 
//uma viagem em um carro que faz 12km/h, pegamos o tempo total e multiplicamos
//pela velocidade media, após isso dividimos por 12 (Coloquei 12.0 para evitar qualquer erro).
