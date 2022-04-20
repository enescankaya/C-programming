#include <stdio.h>

int main()
{
    char x[200],*y;
    int a=0;
    printf("enter words:");
    gets(x);
    y=x;
    while(*y!=NULL)
    {
        a++;
        y+=1;
    }
 printf("lengt of string : %d\n",a);
    return 0;
}