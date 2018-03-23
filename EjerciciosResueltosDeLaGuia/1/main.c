#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int i;
    int num;
    float prom;
    int suma=0;

    for(i=0; i<5; i++)
    {
        printf("ingrese 5 numeros");
        scanf("%d",&num);
        suma = suma+num;
    }

    prom= (float)suma/i;
    printf("el promedio fue %.2f",prom);
    return 0;
}
