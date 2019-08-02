//Programa simples que calcula a área de diversas figuras geométricas com base em trẽs valores!

#include <stdio.h> 

int main(){

 double a,b,c, pi = 3.14159;
 double areatri,areacirc, areatrap,areaquad,arearetang;

 printf("Entre com o primeiro valor: \n");
 scanf("%lf", &a);
 printf("Digite o segundo valor: \n");
 scanf("%lf", &b);
 printf("Digite o terceiro valor: \n");
 scanf("%lf", &c);

 areatri = (a * c) / 2;
 areacirc = pi * (c * c);
 areatrap = ((a + b) * c) / 2;
 areaquad = b * b;
 arearetang = a * b;

printf("TRIANGULO: %.3lf \n",areatri);
printf("CIRCULO: %.3lf \n",areacirc);
printf("TRAPEZIO: %.3lf \n",areatrap);
printf("QUADRADO: %.3lf \n", areaquad);
printf("RETANGULO: %.3lf \n", arearetang);

}
