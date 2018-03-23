#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int producto;
    int cuadrado;
    do
    {
        printf("ingrese primer numero: \n");
        scanf("%d",&num1);
    }while(num1==0);
    do{
        printf("ingrese segundo numero: \n");
        scanf("%d",&num2);
    }while(num2==0);
    cuadrado = num1*num1;
    producto = num1*num2;
    printf("producto de los dos numeros es: %d\n",producto);
    printf("el cuadrado del primer numero es: %d\n",cuadrado);


        return 0;
}
