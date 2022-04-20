#include <stdio.h>
int func(int x)
{
    if (x==1)
    return 5;

    return 5+func(x-1);
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d\n",func(x));
    return 0;

}