#include <stdio.h>

int fonk(int a)
{
    if (a<=0)
    {
        return 0;
    }
    else
    
        return  2+fonk(a-1);

    
}
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d\n",fonk(x));
    
    
    return 0;
}