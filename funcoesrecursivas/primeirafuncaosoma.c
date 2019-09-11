#include <stdio.h>
#include <stdlib.h>


int soma(int num);

int soma(int num){
    int sum = 0;
    for(int i=0;i <= num; i++)
        sum +=i;
    return sum;

}


int main()
{
    int num;
    scanf("%d", &num);
    printf("A soma de 0 ate %d = %d",num,soma(num));
}
