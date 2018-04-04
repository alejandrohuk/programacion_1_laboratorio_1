    #include <stdio.h>
    #include <stdlib.h>
    #define CANT 5
    int main()

    {
    int edad[CANT];
    float sueldo[CANT];
    int i;
    int legajo[CANT];

    for (i=0;i<CANT;i++)
    {
    printf("Ingrese edad:");
    scanf("%d",&edad[i]);
    legajo[i]=i+1;
    }
    for (i=0;i<CANT;i++)
    {
    printf("ingrese sueldo");
    scanf("%f",&sueldo[i]);
    }
    for (i=0;i<CANT;i++)
    {
        printf("edad: %d \n",edad[i]);
        printf("sueldo: %.2f \n",sueldo[i]);
        printf("legajo: %d \n",legajo[i]);
    }
    return 0;
    }
