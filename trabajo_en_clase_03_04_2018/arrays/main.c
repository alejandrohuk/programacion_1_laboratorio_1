#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];
    int i;
    for(i=0;i<5;i++)
    {

        printf("ingrese: ");
        scanf("%d",&vec[i]);
    }
      for(i=0;i<5;i++)
    {

     printf("%d \n",vec[i]);
    }

    return 0;
}
