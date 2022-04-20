#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a,n;
    int sum;
    printf("enter a number :");
    scanf("%d",&n);
    

    for(int j = 1;j<=n;j++)
    {
        sum=0;
    for(int i =1;i<j;i++)
    {
    if(j%i==0)
    {
        sum+=i;
    }

    }
    if(sum==j){
    printf("%d\n",j);
    }
    }
    




    return 0;
}