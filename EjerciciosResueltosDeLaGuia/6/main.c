#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posi=0;
    int nega=0;
    int num;
    int i;
    printf("debera ingresar 10 numeros");
    for(i=0;i<10;i++)
    {
      printf("ingrese numero");
      scanf("%d",&num);
      if(num<0)
      {
          nega++;
      }
      else
        {
            if(num>0)
            {
            posi++;
            }
        }



    } /** fin de for*/
    printf("cantidad de positivos; %d\n",posi);
    printf("cantidad de negativos; %d\n",nega);


    return 0;
}
