#include <stdio.h>
int okek(int,int);
int main()
{
    int x, y;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("okek(%d,%d)=%d\n",x,y,okek(x,y));
}
int okek(int x,int y)
{
static int i =2;
if(x%i==0 && y%i==0)
return i;
i++;
return okek(x,y);
}