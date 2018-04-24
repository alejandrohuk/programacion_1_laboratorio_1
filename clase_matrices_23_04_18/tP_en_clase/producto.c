#include <stdlib.h>
#include "producto.h"
void inicializar(Eproducto pro[], int cantidad){
    int i;

    for(i=0; i<cantidad; i++){
        emp[i].estado = 0;
    }
}

void alta(Eproducto pro[], int cantidad){
    int i;

    for(i=0; i<cantidad; i++){
        if(pro[i].Eproducto == 0){
            printf("codigo: \n");
            fflush(stdin);
            scanf("%d", &pro[i].codigo);



            pro[i].estado = 1;

            break;
        }
    }
}
