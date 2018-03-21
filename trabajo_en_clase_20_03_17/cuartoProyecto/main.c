#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    do
    {
        printf("ingrese un numero: ");
        scanf("%i",&i);
        printf("ingrese otro numero: ");
        scanf("%i",&j);
    }
      while (i<j);
        return 0;
}
