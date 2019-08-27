//Codigo simples para imprimir somente os numeros pares com base no loop e na condição for

#include <stdio.h>

int main ()

  {
    int i=0;
    for(i=0;i<=100; i++){
     if(i % 2 == 0){    
    printf("%d \n", i);
     }
   }
}
