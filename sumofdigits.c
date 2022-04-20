#include <stdio.h>
long func(long x)
{
    if(x==0)
    return 0;

    return x%10+func(x/10);
}

int main()
{
    long int x;
    printf("enter a number:");
    scanf("%ld",&x);
    printf("sum of digits: %ld\n",func(x));
    return 0;
}