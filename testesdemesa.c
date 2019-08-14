3)
#include <stdio.h>
#include <stdlib.h>

void por_valor(int a,int b,int c);
void por_ref(int*a,int*b,int*c);
void por_valor(int a, int b, int c){
    a=b=c=0;
}
void por_ref(int*a,int*b,int*c){

    *a=*b=*c=0;
}
int main(void){

    int x=2,y=4,z=6;
    printf("\n Antes de chamar por_valor: x=%d,y=%d,z=%d", x,y,z);
    por_valor(x,y,z);
    printf("\n Depois de chamar por_valor: x=%d,y=%d,z=%d", x,y,z);
    printf("\n Antes de chamar por_ref x=%d,y=%d,z=%d", x,y,z);
    por_ref(&x,&y,&z);
    printf("\n Depois de chamar por_ref: x=%d, y=%d, z=%d", x,y,z);
    return 0;
    
    
//Teste de mesa
//>- - - 2 4 6 
//>0 0 0 2 4 6
//>0 0 0 2 4 6
//>0 0 0 0 0 0

}

4)
#include <stdio.h>

void muda_primeiro(int*primeiro,int segundo);
void muda_primeiro(int*primeiro,int segundo)
{

*primeiro = segundo;

}
int main(void){

int a=0, b=5;

printf("Valor de a: %d - valor de b: %d\n", a,b);
muda_primeiro(&a,b);
printf("Valor de a: %d - valor de b: %d\n",a,b);
return 0;
}

