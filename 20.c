#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,b,c=3;
    printf("enter a number: ");
    scanf("%d",&b);
    printf("enter term number: ");
    scanf("%d",&a);
    int sum=b;
    for(int i = 1; i<a;i++)
    {
        if(c==3)
        {
        sum-=pow(b,c);
        }
        else{
        sum+=pow(b,c);
    }
    c+=2;
    }
    printf("sum: %d\n",sum);
    return 0;

}
