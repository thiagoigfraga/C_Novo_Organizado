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
