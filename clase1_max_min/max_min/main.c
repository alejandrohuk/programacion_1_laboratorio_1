#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numMax;
    float numMin;
    float acum;
    float aux;
    int i;


    printf("ingrese un numero\n");
    scanf("%f",&aux);
    numMax = aux;
    numMin = aux;
    acum = aux;

    for(i=0;i<4;i++){

        printf("ingrese un numero\n");
        scanf("%f",&aux);
        acum = acum + aux;

        if(aux>numMax)
        {
            numMax = aux;
        }else{
            if(aux<numMin){
            numMin = aux;
            }

        }//end if else


        }//en for
    printf("El numero maximo es: %.2f\nEl numero minimo es: %.2f\nEl promedio es: %.2f\n", numMax, numMin, acum / 5);
    return 0;

    }//end

