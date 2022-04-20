#include <stdio.h>
#include <math.h>
int main(void)
{
    int a=0,b,c,i=0;
    printf("enter a binary number: ");
    scanf("%d",&b);
    for(;b>0;)
    {
        c=b%10;
        a+=c*pow(2,i);
        i++;
        b/=10;



    }
    printf("decimal version: %d\n",a);
    
    return 0;

}