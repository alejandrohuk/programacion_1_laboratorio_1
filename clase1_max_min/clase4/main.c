#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*\brief Solicita un numero al usuario y devuelve resultado.
*\param mensaje Es el mensaje para ser mostrado.
*\return el numero ingresado por el usuario.
*
*/

float getfloat(char mensaje[])
{
    float aux;
    printf("%s",mensaje);
    scanf("%f",&aux);
    return aux;
}

/**

int main()
{
    printf("Hello world!\n");
    return 0;
}
