#include <stdio.h>
#include <stdlib.h>
#define N 5 //O tamanho total do vetor


void carrega(int *v);

void carrega(int *v)
{
    int i;
    for (i=0; i<N; i++)

        v[i]= i;
}

void mostra(int *v);

void mostra(int *v)
{
    int i;
    for (i=0; i<N; i++)
    {
        printf("%d \n", v[i]);
    }
}
int main()
{
    int i;
   // int n;
    int v[N]={1,2}; //Preencher com os valores desejados e ficara 1 2 0 0 0

    //carrega(v);
    mostra(v);
    return 0;
}
