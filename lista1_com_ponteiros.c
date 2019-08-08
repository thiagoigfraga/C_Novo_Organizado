//EXERCICIO1

#include <stdio.h>
#include <stdlib.h>

void multiplo_quatro(int *a, int *c)

{

    *c = *a % 4;

}

int main()
{

    int a = 2;
    int c;
    multiplo_quatro(&a, &c);

    if(c != 0)
    {
        printf("O numero nao eh multiplo de 4");

    }
    else
    {

        printf("O numero eh multiplo de 4");
    }

    return 0;
}

//EXERCICIO2

#include <stdio.h>

void par_ou_impar(int *a, int *c)
{
    *c = *a % 2;
}

int main()
{

    int a, c;

    printf("Digite o numero inteiro: \n");
    scanf("%d", &a);

    par_ou_impar(&a, &c );

    if(c == 1)
    {
      printf("Nao eh par! \n");

    }
    else
    {
      printf("Eh par! \n");
    }
    return 0;
}
