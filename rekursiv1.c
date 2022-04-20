#include <stdio.h>
int fonk(int x)
{
    if ( x==1)
    {
        return 1;
    }
    return x+fonk(x-1);
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d\n",fonk(x));
    return 0;
}