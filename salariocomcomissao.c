// O codigo funciona da seguinte forma:
  - O funcionario coloca seu nome, seu salario fixo mensal e suas vendas em dinheiro.
  - A parte "chata" porém simples é multiplicar a comissão por 0.15 para obter os 15%.
  - O proximo passo é simplesmente juntar o salario fixo + 15% e gerar o salário com comissão.


#include <stdio.h>


int main()
{

    char nome[10]; //string com espaço suficiente para digitar o nome
    double sal_fix, vendas, conta, comissao;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite o seu salario fixo: \n");
    scanf("%lf",&sal_fix);
    printf("Digite em dinheiro as suas vendas nesse mes: \n");
    scanf("%lf", &vendas);
    comissao = vendas * 0.15; // Parte mais importante do codigo
    conta = sal_fix + comissao;
    printf("%s, seu salario eh: R$ %.2lf \n", nome,conta);
    return 0;
}
