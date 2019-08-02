//Programa simples que calcula o volume de uma esfera com base no raio elevado a três.
//No caso do (4/3.0), só não deixei (4/3) por uma questão de leitura da linguagem
//já que ela assume que inteiro dividido por inteiro gera uma divisão inteira...


#include <stdio.h>

int main(){

    int raio;
    float pi =  3.14159, conta;

printf("Escreva o raio da esfera: \n");
scanf("%d", &raio);
conta = (4/3.0) * pi * (raio * raio * raio); //

printf("O volume da esfera eh: %.3f \n", conta);

}
