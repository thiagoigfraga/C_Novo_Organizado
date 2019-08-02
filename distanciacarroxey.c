#include <stdio.h>
#include <math.h>

int main(){

    int conta, distancia;

    printf("Digite a distância atual entre os dois carros:  \n");
    scanf("%d", &distancia);
    conta = distancia * 2;
    printf("A carro y toma a frente em cerca de %d minutos \n", conta);
    
    //Contexto do Exercício:
    //Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.//
//Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.//
//Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.//



