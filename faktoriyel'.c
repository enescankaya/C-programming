#include <stdio.h>
long fact(long x)
{
if (x==1)
    return 1;
return x*fact(x-1);
}
int main()
{
    long int x;
    printf("enter a number:");
    scanf("%ld",&x);
    printf("%ld factoriel: %ld\n",x,fact(x));
    return 0;
}