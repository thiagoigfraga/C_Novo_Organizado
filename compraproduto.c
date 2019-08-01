//Codigo simples feito para gerar o valor total a ser pago para dois produtos não especificados

//Grande parte do codigo simplesmente está ali para ser visualmente "legal" de ver, mas
//do ponto de vista lógico, só é necessário multiplicar a(s) unidade(s) x valor de cada peça.

#include <stdio.h>

int main() {

    int  cod1,quant1,cod2,quant2;
    float valorun1,peca1, valorun2,peca2,total;

    printf("Digite o codigo para identificar a primeira peca:  \n");
    scanf("%d", &cod1);
    printf("Digite a quantidade desejada de pecas: \n");
    scanf("%d", &quant1);
    printf("Digite o valor unitario da primeira peca: \n");
    scanf("%f", &valorun1);
    printf("\n \n \n");
    printf("-------------------------------------------------------------------------------------------- \n \n");
    printf("Digite o codigo para identificar a segunda peca: \n");
    scanf("%d", &cod2);
    printf("Digite a quantidade desejada de pecas: \n");
    scanf("%d", &quant2);
    printf("Digite o valor unitario da segunda peca: \n");
    scanf("%f", &valorun2);

    peca1 = quant1 * valorun1;
    peca2 = quant2 * valorun2;
    total = peca1+peca2;

    printf("Aqui esta seu recibo de compras: \n");
    printf("CODIGO: %d UNIDADE S: %d VALOR UN: %.2f \n", cod1, quant1, valorun1);
    printf("CODIGO: %d UNIDADE S: %d VALOR UN: %.2f \n\n", cod2, quant2, valorun2);
    printf("Valor total a pagar: R$ %.2f \n", total);

}
