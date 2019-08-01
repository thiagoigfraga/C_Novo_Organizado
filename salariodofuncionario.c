//Código feito para calcular o salário de um funcionário com base em suas horas trabalhadas x salário/h! 


#include <stdio.h>

int main()
{

    int id, horast;
    float salarioh, conta;

    printf("Bem vindo ao programa feito para calcular o salario do funcionario! \n\n");
    printf("Digite o seu numero de identificacao: \n");
    scanf("%d", &id);
    printf("Digite o numero de horas trabalhadas: \n");
    scanf("%d", &horast);
    printf("Digite quanto voce recebe por hora atualmente: \n");
    scanf("%f", &salarioh);
    conta = horast * salarioh;
    printf("\n \n");

    printf("Seu numero de identificacao eh: %d \n\n", id);
    printf("Seu salario eh: R$%.2f \n \n", conta);
}
