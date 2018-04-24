#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dato;
    dato=sizeof(char);
    printf("char = %d\n",dato);
    dato=sizeof(int);
    printf("int = %d\n",dato);
    dato=sizeof(float);
    printf("float = %d\n",dato);
    dato=sizeof(double);
    printf("double = %d\n",dato);
    dato=sizeof(unsigned);
    printf("unsigned = %d\n",dato);
    dato=sizeof(unsigned long);
    printf("unsigned long = %d\n",dato);

    return 0;
}
