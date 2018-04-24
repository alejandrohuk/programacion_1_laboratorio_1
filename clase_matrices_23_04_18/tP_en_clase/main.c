#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#define CANT 3
#define ESC 27
int main()
{
    Eproducto pro[CANT];

    int i;
    char opcion;

    alta(pro, CANT);

    do  {

        alta(pro,CANT);
        printf("salir?");
        scanf("%d",opcion);
        }

        while(opcion != ESC);
}
