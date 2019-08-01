//Codigo simples que calcula duas médias com pesos, sendo que os parênteses são muitos importantes para que a saída seja correta!

#include <stdio.h>

int main() {

    float a,b, media;

    printf("Digite a primeira nota com peso 3.5: \n");
    scanf("%f", &a);
    printf("Digite a segunda nota com peso 7.5: \n");
    scanf("%f", &b);
    media = (a * 3.5 + b * 7.5) / 11; //Parte mais importante do codigo
    printf("A media das duas notas foi %.1f", media);
    return 0;
}
