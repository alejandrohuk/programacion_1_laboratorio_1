#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

int main()
{
    int contadorDeIntentos=0;
    char jugador[20];
    int numeroOculto;
    int numeroIngresado;
    char teclaingresada;
    int jugar;
    teclaingresada = 's';

    while(teclaingresada == 's')
    {
        numeroOculto = getNumeroAleatorio(1 , 100 , 1);
        printf("ingrese el nommbre del jugador: ");
        setbuf(stdin,NULL);
        scanf("%s",jugador);

        jugar = 1;
        while(jugar == 1)
        {
            numeroIngresado = getInt("ingrese un numero 0 al 99 \n");
            if(numeroIngresado < 0)
            {
                printf("DEL '0' al  '99' FORRO!!!");
                jugar = 0;
            }
            else if(numeroIngresado == numeroOculto)
            {


    if(contadorDeIntentos <= 1)
    {
        printf("%s CORRECTO!! tuviste %d intentos!!! \n ERES EL PUTO AMO, SEGURO TE VA COMO EL OGT EN EL AMOR", jugador, contadorDeIntentos);
        contadorDeIntentos = 0;
    }
    else if(contadorDeIntentos > 1 && contadorDeIntentos <= 3)
    {
        printf("%s CORRECTO!! Tuviste %d intentos, sos bastante bueno..., jugale a la loteria\n", jugador, contadorDeIntentos);
        contadorDeIntentos = 0;
    }
    else if(contadorDeIntentos > 3 && contadorDeIntentos <= 5)
    {
        printf("%s CORRECTO Tuviste %d intentos, nada mal para alguien como vos\n", jugador, contadorDeIntentos);
        contadorDeIntentos = 0;
    }
    else if(contadorDeIntentos > 5 && contadorDeIntentos <= 8)
        {
        printf("%s CORRECTO Tuviste %d intentos, podria ser peor... viniendo de vos... \n", jugador, contadorDeIntentos);
        contadorDeIntentos = 0;
        }
    else if(contadorDeIntentos > 8 && contadorDeIntentos <= 10)
        {
        printf("%s CORRECTO Tuviste %d intentos, Digamoslo asi, eres lentoooo\n", jugador, contadorDeIntentos);
        contadorDeIntentos = 0;
        }
        else if(contadorDeIntentos > 10  && contadorDeIntentos <= 20)
        {
        printf("%s CORRECTO Tuviste %d intentos, Seguro te va bien el en amor porque en el juego evidentemente te va como el orto\n", jugador, contadorDeIntentos);
        contadorDeIntentos = 0;
        }

                jugar = 0;

        }
            else if(numeroIngresado < numeroOculto)
            {
                printf("%s El numero que ingresaste es menor que el numero oculto\n", jugador);
            }
            else if(numeroIngresado > numeroOculto)
            {
                printf("%s el numero ingresado es mayor que el numero oculto\n", jugador);
            }

            contadorDeIntentos ++;

        }//while jugar



    }//while seguir jugando

    return 0;
}
