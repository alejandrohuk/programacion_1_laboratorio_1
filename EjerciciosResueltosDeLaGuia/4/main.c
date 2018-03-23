#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resta;
    printf("ingrese 1er numero: \n ");
    scanf("%d",&num1);
    printf("ingrese 2do numero: \n ");
    scanf("%d",&num2);
    resta = num1-num2;

     if(resta>0)
    {
        printf("resultado positivo");
    }else
    {
        printf("resultado negativo");
    }



}
