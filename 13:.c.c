#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a,c;
    int sum=1;
    int sum1=0;
    printf("enter a number :");
    scanf("%d",&a);
    int temp=a;
    while (a>0)
    {
        c=a%10;
        sum=1;
        for(int i = 1; i<=c;i++)
        {
            sum*=i;

        }
        sum1+=sum;
        a/=10;
        
    }
    if(sum1==temp)
    {
        printf("%d is a strong number.\n",temp);
    }
    else
    
        printf("%d is not a strong number.\n",temp);

    return 0;
}