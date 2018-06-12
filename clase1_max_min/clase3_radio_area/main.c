#include <stdio.h>
#include <stdlib.h>

float pedir_numero();
float calcularAreaCirculo(float radio);

int main()
{
    float auxMain;
    float area;

    auxMain = pedir_numero();
    area = calcularAreaCirculo(auxMain);
    printf("El area del circulo es: %.2f\n",area);
    return 0;
}
/**
*\brief Solicita un numero y lo retorna.
*\return Numero ingresado por el usuario.
*
*/

float pedir_numero()
{
    float aux;
    printf("Ingrese un numero: ");
    scanf("%f",&aux);
    return aux;
}
/**
*\brief Recibe el radio y calcula el area del circulo.
*\param Radio correspondiente al radio del circulo.
*\return El area del circulo.
*
*/
float calcularAreaCirculo(float radio)
{
    float resultado;
    resultado = 3.14 * radio * radio;
    return resultado;
}
