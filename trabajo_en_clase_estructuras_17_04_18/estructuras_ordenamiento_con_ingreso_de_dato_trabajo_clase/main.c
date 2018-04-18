#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"
#define CANT 2



int main()
    {

    Eempleado emp[CANT];
    int i;
    for(i=0;i<CANT;i++){
    system("cls");
        printf("ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]",emp[i].nombre);
        printf("ingrese el dia de nacimiento: ");
        scanf("%d",&emp[i].fn.dia);
        printf("ingrese el mes de nacimiento: ");
        scanf("%d",&emp[i].fn.mes);
        printf("ingrese el anio de nacimiento: ");
        scanf("%d",&emp[i].fn.anio);
        printf("ingrese el legajo: ");
        scanf("%d",&emp[i].legajo);
        printf("ingrese salario: ");
        scanf("%f",&emp[i].salario);
    }
     for(i=0;i<CANT;i++){

            printf("el nombre ingresado es: %s \n" "El dia de naciento es: %d \n" "El mes de nacimiento es: %d \n" "el anio de nacimiento es: %d n" "el legajo es: %d \n" "el salario es: %.2f \n", emp[i].nombre, emp[i].fn.dia, emp[1].fn.mes, emp[i].fn.anio, emp[i].legajo, emp[i].salario);
     }
return 0;
    }
