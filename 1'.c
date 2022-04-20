#include <stdio.h>

int main()
{
    int x, z,*y,*m;
    y=&x;
    m=&z;
    printf("enter two number: ");
    scanf("%d %d",&x,&z);
    printf("%d + %d = %d\n",x,z,*y+*m);
    return 0;
}