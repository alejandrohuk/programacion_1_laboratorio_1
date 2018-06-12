#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

/**
*\brief Pide un numero flotante y lo devuelve.
*\param mensaje Recive el mensaje.
*\return retorna un numero flotante.
*
**/
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

/**
*\brief Pide un caracter y lo devuelve.
*\param mensaje Recive el mensaje.
*\return retorna un caracter.
*
**/
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    setbuf(stdin, NULL);
    scanf("%c",&auxiliar);
    return auxiliar;
}

/**
*\brief Pide un numero entero y lo devuelve.
*\param mensaje Recive el mensaje.
*\return retorna un numero entero.
*
**/
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/**
*\brief Genera un numero aleatorio.
*\param desde Numero aleatorio minimo.
*\param hasta Numero aleatorio maximo.
*\param inicar Indica si se trata del primer numero solicitado 1 indica que si.
*\return retorna el el numero aleatorio generado.
*
*/
int getNumeroAleatorio(int desde , int hasta , int iniciar)
{
    if(iniciar)
        srand(time(NULL));
    return desde + (rand() % (hasta + 1 - desde));
}


