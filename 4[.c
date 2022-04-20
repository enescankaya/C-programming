#include <stdio.h>
#include <stdlib.h>
int main()
{
int number=2010213061;
int a,i=1,m=-1;
int *b;
b=&a;
b=(int*)malloc(i*sizeof(int));
while(number!=0)
{
    b=(int *)realloc(b,(i+1)*sizeof(int));
    *(b+i-1)=number%2;
    number/=2;
    i++;
    m++;
}
for(int k=m;k>=0;k--)
{
    printf("%d ",*(b+k));
}
printf("\n");
return 0;
}