#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
int dia, mes, anio;
}Efecha;
typedef struct{
int legajo;
float salario;
char nombre[31];
Efecha fn;
}Eempleado;

void alta(Eempleado[],int);

void listar(Eempleado[],int);


#endif // ESTRUCTURA_H_INCLUDED
