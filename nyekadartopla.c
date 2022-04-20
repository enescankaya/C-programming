#include <stdio.h>
int funck(int x)
{
    if(x==1)
    return 1;
    return x+funck(x-1);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum: %d\n",funck(n));
    return 0;
}