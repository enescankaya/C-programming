#include <stdio.h>
int prime(int);
int z=2;
int c=0;
int main()
{
    int i=2;
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
for(;i<=x;i++){
    if(prime(i)==0)
    printf("%3d\n",i);
    z=2;
    c=0;
}
    return 0;

}
int prime(int a){
if(a<2)
return 1;
if(z==a)
return c;
if(a%z==0)
c=1;
z++;
return prime(a);
}