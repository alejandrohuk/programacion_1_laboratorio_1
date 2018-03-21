#include <stdio.h>
#include <stdlib.h>

    int main()
{


{
    int i;
    int suma = 0;
    int max;
    int min;
    int flag = 0;
    int aux;
    float prom;
    for(i=0; i<10;i++)
    {

        printf("ingrese un numero: ");
        scanf("%d",&aux);

        suma=suma+aux;

        if(flag==0)
        {
            max = aux;
            min = aux;
            flag = 1;

        }
        else
            {
            if(aux>max)
            {
            max = aux;
            }
            }
            if(aux<min)
            {
            min = aux;
            }
    }
    prom = (float) suma / i;
    printf("la suma es:%d\n",suma);
    printf("el promedio es:%.2f\n",prom);
    printf("El maximo es:%d\n",max);
    printf("El minimo es:%d\n",min);

    }
    return 0;
}
