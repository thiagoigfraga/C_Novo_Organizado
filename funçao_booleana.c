#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++){
        printf("%d \n", a[i]);
        if (a[i] == 0){

            return true;
        }
    }
    return false;
}
int main(){

int a[5] = {1,1,1,1,0};
int n = 5;

printf("\n %d",has_zero(a,n));

}
