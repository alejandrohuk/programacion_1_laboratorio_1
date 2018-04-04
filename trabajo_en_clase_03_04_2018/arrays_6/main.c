#include <stdio.h>
#include <stdlib.h>
int main()
{


for(i=0;i<CANT-1;i++)
{
for(j=i+1;j<CANT;j++)
{
if(vec[i]>vec[j])
{
aux=vec[i];
vec[i]=vec[j];
vec[j]=aux;
}
}
}
}

