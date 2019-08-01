#include <stdio.h>

int main() {

  int a,b, mult;

  printf("Digite dois numeros para multiplicar: \n");
  scanf("%d", &a);
  scanf("%d", &b);
  mult = a * b;
  printf(" %d x %d = %d", a,b,mult );
  return 0;
}
