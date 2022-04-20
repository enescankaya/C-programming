#include <stdio.h>
void fonk(int *m,int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
int main()
{
    int a=5,b=3;
    fonk(&a,&b);
    printf("a: %d\nb: %d\n",a,b);
    return 0;
}