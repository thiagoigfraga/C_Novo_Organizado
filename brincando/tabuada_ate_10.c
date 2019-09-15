#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero;
    int i, mult;

    printf("Digite o numero desejado: \n");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        mult = numero * i;
        printf("%d x %d = %d \n", numero,i,mult);
    }

}
