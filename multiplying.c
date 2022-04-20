#include <stdio.h>
int func(int x,int y)
{
    if(y==1)
        return x;
    return x+func(x,y-1);
}

int main()
{
    int x,y;
    printf("enter numbers you want to multiply:");
    scanf("%d %d",&x,&y);
    printf("%d * %d : %d\n",x,y,func(x,y));
    return 0;
}