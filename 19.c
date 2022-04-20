#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,b,fact;
    printf("enter a number: ");
    scanf("%d",&b);
    printf("enter term number: ");
    scanf("%d",&a);
    float sum=1;
    for(int i = 1; i<a;i++)
    {
        fact=1;
        for(int j =1;j<=i;j++)
        {
            fact*=j;
        }
        sum+=pow(b,i)/fact;


    }
    printf("sum: %f\n",sum);
    return 0;

}