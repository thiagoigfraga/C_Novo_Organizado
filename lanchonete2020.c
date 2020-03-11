#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco1,preco2,preco3;
    int sanduiche,bebida,sobremesa;

    printf("Selecione o sanduiche: \n 1 - X Salada \n 2 - X Frango \n 3 - X Picanha \n 4 - X Bacon \n");
    scanf("%d", &sanduiche);
    switch(sanduiche)
    {
    case 1:
        preco1 = 5.00;
        break;
    case 2:
        preco1 = 6.00;
        break;
    case 3:
        preco1 = 8.50;
        break;
    case 4:
        preco1 = 6.00;
        break;
    default:
        preco1= 0.00;
        break;
    }

        printf("Selecione a bebida: \n 1 - Agua \n 2 - Milk Shake \n 3 - Refrigerante \n 4 - Suco  \n");
        scanf("%d", &bebida);
        switch(bebida)
        {
        case 1:
            preco2 = 2.00;
            break;
        case 2:
            preco2 = 7.00;
            break;
        case 3:
            preco2 = 2.50;
            break;
        case 4:
            preco2 = 3.50;
            break;
        default:
            preco2= 0.00;
            break;
        }
    printf("Selecione o sobremesa:\n 1 - Casquinha \n 2 - Torta \n");
    scanf("%d", &sobremesa);
    switch(sobremesa)
    {
        case 1:
            preco3 = 3.00;
            break;
         case 2:
            preco3 = 3.50;
           X Salada  X Frango  X Picanha  X Bacon break;
         default:
            preco3 = 0.00;
            break;
    }
    if(preco1 == 8.50 && preco2 == 3.50)
    {
        printf("Promocao: R$ %.2f", 11.00 + preco3);
    }
    else if(preco1 == 5.00 && preco2 == 7.00)
    {
        printf("Promocao: R$ %.2f", 10.00 + preco3);
    }
    else if(preco1 == 6.00 && preco2 == 2.50)
    {
        printf("Promocao: R$ %.2f", 7.50 + preco3);
    }
    else
    {
        printf("Preco final: R$ %.2f",preco1 + preco2 + preco3);
    }
    return 0;

}
