#include <stdio.h>

int main()
{

    double A,B,C, media;

    printf("Digite a primeira nota 'A' com peso 2.0: \n");
    scanf("%lf", &A);
    printf("Digite a segunda nota 'B' com peso 3.0: \n");
    scanf("%lf", &B);
    printf("Digite as terceira nota 'C' com peso 5.0: \n");
    scanf("%lf", &C);
    media = (A * 2.0 + B * 3.0 + C * 5.0) / 10; //Parte mais importante do código!
    printf("A media das tres notas eh: %.1lf \n", media);
    return 0;

}


