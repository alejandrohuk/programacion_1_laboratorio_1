#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;


        printf("ingrese un numero: ");
        scanf("%d",&num);
         if(num<0)
         {
             printf("ERROR, el numero debe ser mayor que cero");
         }else
         {
            printf("el cuadrado del numero ingresado es: %d",num*num);
         }





    return 0;
}
