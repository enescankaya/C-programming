#include <stdio.h>
int main()
{
    int a,c,i,j=1;
    int sum,temp;
    int sum1;
    printf("enter a number :");
    scanf("%d",&a);
        for(j=1;j<=a;j++)
    {
    sum1=0;
    temp=j;
        for (;temp>0;)
    {
    c=temp%10;
    sum=1;
        for(int i = 1; i<=c;i++)
        {
    sum*=i;

        }
    sum1+=sum;
    temp/=10;
        
    }
    if(sum1==j)
    
        printf("%d, ",j);    

    }
    printf("\n");
    return 0;
}