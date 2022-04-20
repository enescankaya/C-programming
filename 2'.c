#include <stdio.h>

int main()
{
int a[10],*b;
b=a;
for(int i = 0;i<10;i++)
{
    printf("enter %d. number: ",i+1);
    scanf("%d",&a[i]);
}
for(int i = 0;i<10;i++)
{
    printf("%d--%d--%d----%p\n",b[i],*(b+i),a[i],&a[i]);
}
return 0;
}