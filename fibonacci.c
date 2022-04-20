#include <stdio.h>
int fib(int x)
{
    if (x==0)
    return 0;
    if(x==1)
    return 1;

    return fib(x-1)+fib(x-2);    
    }

int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
    printf("Fib(%d): %d\n",i,fib(i));
    }
    return 0;
}
