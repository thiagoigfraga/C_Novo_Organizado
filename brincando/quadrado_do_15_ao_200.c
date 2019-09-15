#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero = 15;
    int numeroquad;
    for(numero = 15;numero <= 200;numero++){
        numeroquad = numero * numero;
        printf("numero: %d ao quadrado: %d \n", numero, numeroquad);
    }

}
