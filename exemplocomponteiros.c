#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void incrementa_num(int *, int *,int *);

void incrementa_num(int *a, int *b,int *c)
{

    *a= *a * 2;
    *b= *b * 3;
    *c= *c * 4;
}

int main()
{

    int a=2,b=3,c=4;

    incrementa_num(&a, &b, &c);
    printf("%d %d %d", a, b, c);

    return 0;
}
