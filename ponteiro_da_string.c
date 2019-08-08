#include <string.h>

void insere(char *a)
{

    strcpy(a, "Dado");
}

int main()
{
    char a[4];
    insere(a);
    printf("%s", a);
    return 0;

}

