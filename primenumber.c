#include <stdio.h>
int prime(int);
int main()
{
    
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(prime(x)==0)
    printf("%d is a prime number\n",x);
    else
    printf("%d is not a prime number:\n",x);
    return 0;
}
int prime(int a){
static int c=0;
static int i=3;

if(a<2)
return 1;
if(i==a)
return c;
if(a%i==0)
c=1;
i++;
return prime(a);
}