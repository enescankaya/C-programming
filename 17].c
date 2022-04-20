#include <stdio.h>
#include <math.h>


int main()
{
    
    int n;
    float sum=0.0;
    printf("enter a number: ");
    scanf("%d",&n);
    for (float i=2;i<=n;i+=2)
    {
        sum+=1/i;

    }
    printf("sum : %f\n",sum);
    
    
    return 0;
} 