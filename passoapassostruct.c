#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int ra;
    int cpf;
    float mesada;
} cadastro;

void insere(cadastro aluno[2])
{
    for(int i = 0; i<2; i++)
    {
        scanf("%d", &aluno[i].ra);
        scanf("%d", &aluno[i].cpf);
        scanf("%f", &aluno[i].mesada);
    }

}
void mostra(cadastro aluno [2])
{
    insere(aluno);
    for(int i = 0; i<2; i++)
    {
        printf("%d \t", aluno[i].ra);
        printf("%d \t", aluno[i].cpf);
        printf("%.1f \n", aluno[i].mesada);

    }
}

int main()
{
    cadastro aluno[2];
    mostra(aluno);
}
