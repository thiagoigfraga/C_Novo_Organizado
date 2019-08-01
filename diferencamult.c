//Esse código foi feito para subtrair a diferença de duas multiplicações e gerar o resultado.

#include <stdio.h>

int main()
{

    int A,B,C,D, DIFERENCA;

    printf("Digite o valor A: \n");
    scanf("%d", &A);
    printf("Digite o valor B: \n");
    scanf("%d", &B);
    printf("Digite o valor C: \n");
    scanf("%d", &C);
    printf("Digite o valor D: \n");
    scanf("%d", &D);

    DIFERENCA = A * B - C * D;

    printf("A diferenca dos 4 valores eh: %d \n", DIFERENCA);




}
