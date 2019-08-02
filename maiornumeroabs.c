// Codigo simples que calcula o absoluto(maior) entre três números inteiros!


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a,b,c,conta1,conta2;

printf("Digite o primeiro numero: \n");
scanf("%d", &a);
printf("Digite o segundo numero: \n");
scanf("%d", &b);
printf("Digite o terceiro numero: \n");
scanf("%d", &c);
conta1 = (a + b + abs(a-b)) / 2.0;
conta2= (conta1 + c + abs(conta1 - c)) / 2.0;

printf("o maior numero eh: %d \n", conta2);

}
