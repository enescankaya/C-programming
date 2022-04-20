#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int func(int a)
{
    int sum=0;
    while(a!=0)
    {
        sum+=a%10;
        a/=10;
    }
return sum;
}

int main()
{
    int size=5,i=4;
    char b;
    char *a=&b;
    a=malloc(size*sizeof(char));
    strcpy(a,"enes");
    int sum=func(2010213061);
    a=realloc(a,(size+sum-1)*sizeof(char));
    while((sum+size-i-1)>4)
    {
    strcpy(a+i,"enes\0");
    i+=4;
    }
    printf("%s \n",a);
        return 0;
}