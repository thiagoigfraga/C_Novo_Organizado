#include <stdio.h>

int main()
{
    float raio, area;
    float pi = 3.14159;

    printf("Digite o raio: \n");
    scanf("%f", &raio);
    area = pi * (raio*raio);
    printf("A area do circulo eh: %.1f", area);
    return 0;
}
