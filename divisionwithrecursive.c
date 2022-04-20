#include <stdio.h>
int division(int x,int y)
{
    if(x-y==0)
    return 1;
    return 1+division(x-y,y);
}
int main()
{
    int x,y;
    printf("enter two number:");
    scanf("%d %d",&x,&y);
    printf("%d divided by %d: %d\n",x,y,division(x,y));
    return 0;
}