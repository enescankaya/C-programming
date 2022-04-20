#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a;
    int sum=0;
    printf("enter a number :");
    scanf("%d",&a);
    for(int i =1;i<a;i++)
    {
    if(a%i==0)
    {
        sum+=i;
    }
    }
    if(sum==a)
    printf("%d is a perfect number\n",a);
    else 
    printf("%d is not a perfect number\n",a);




    return 0;
}