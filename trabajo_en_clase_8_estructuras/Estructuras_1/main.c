#include <stdio.h>
#include <string.h>
struct fecha { int dia,mes,anio;};
struct gente {
char nombre[20];
struct fecha f_nacimiento;
};
int main()
{
struct gente pers;
struct fecha fn;
printf("Ingrese nombre: ");
gets(pers.nombre);
printf("Ingrese dia de nacimiento: ");
scanf("%d",&fn.dia);
printf("Ingrese mes de nacimiento: ");
scanf("%d",&fn.mes);
printf("Ingrese a¤o de nacimiento: ");
scanf("%d",&fn.anio);
pers.f_nacimiento=fn;

printf("sus datos ingresados fueron, nombre: %s \n dia de nacimiento: %d \n mes de nacimiento: %d \n anio de naciemiento: %d",pers.nombre, fn.dia, fn.mes, fn.anio);

return 0;
}
