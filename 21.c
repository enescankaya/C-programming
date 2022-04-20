#include <stdio.h>
#include <math.h>
int main(void)
{
    long long int b,sum=1,c=1;
    printf("enter a number: ");
    scanf("%lld",&b);
    printf("********************\n1 \n");

    for(int i=1;i<b;i++)
    {
        c+=pow(10,i);
        sum+=c;
        printf("%lld\n",c);        
    }
    printf("sum: %lld\n",sum);
  
    return 0;

}