#include <stdio.h>
#include <stdlib.h>

void mostra(int v[5])
{
    int i;
    for (i=0; i<5; i++){
        printf("%d \n", v[i]);
    }
}
void carrega(int v[5])
{
    int i;
    for (i=0; i<5; i++)

        v[i]= i;
}


int main()
{
    int v[5];

    carrega(v);
    mostra(v);
    return 0;
}
