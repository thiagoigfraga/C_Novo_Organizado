#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int ra;
    int cpf;
    float mesada;
} cadastro;


void mostra(cadastro aluno)
{
    for(int i = 0; i<2; i++)
    {
        printf("%d \t", aluno.ra);
        printf("%d \t", aluno.cpf);
        printf("%.0f \n", aluno.mesada);

    }
}
void altera(cadastro aluno){

aluno.ra= 0;
aluno.cpf=0;
aluno.mesada=0;

}

int main()
{
    cadastro aluno = {1,2,3};
    mostra(aluno);
    altera(aluno);
    mostra(aluno);
}
