#include <stdio.h>
#include <stdlib.h>

void carrega(int *v, int n);

void carrega(int *v, int n)
{
    int i;
    for (i=0; i<n; i++)

        v[i]= i;
}

void mostra(int *v, int n);

void mostra(int *v, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%d \n", v[i]);
    }
}
int main()
{
    int i;
    int n = 6;
    int v[n];

    carrega(v,n);
    mostra(v,n);
    return 0;
}
