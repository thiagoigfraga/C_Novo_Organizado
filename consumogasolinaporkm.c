#include <stdio.h>

int main(){

    double combsgasto, conta;
    int   distpercorrida;

    printf("Digite a distância total percorrida em Km: \n");
    scanf("%d", &distpercorrida);
    printf("Digite o total de combustível gasto em L: \n");
    scanf("%lf", &combsgasto);
    conta = distpercorrida / combsgasto;
    printf("O consumo total foi %.3lf km/l \n", conta);
}
