//Codigo simples feito para calcular uma distância entre dois pontos utilizando potência 


#include <stdio.h>
#include <math.h>


int main(){

    float x1, y1, x2, y2,p1,p2;
    float raiz;

    printf("Digite os valores X e Y do primeiro ponto: \n");
    printf("X1: \n");
    scanf("%f", &x1);
    printf("Y1: \n");
    scanf("%f", &y1);
    printf(" \n \n");
    printf("Digite os valores X e Y do segundo ponto: \n");
    printf("X2: \n");
    scanf("%f", &x2);
    printf("Y2: \n");
    scanf("%f", &y2);
    p1=x2-x1;
    p2=y2-y1;
    raiz = sqrt((p1*p1)+(p2*p2));
    printf("O resultado da distancia entre dois pontos eh: %.4f \n", raiz);
}
