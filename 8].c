#include <stdio.h>
#include <math.h>
int main()
{
int a;
int b;
int sum = 0;

printf("enter first number:");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
int min=(a<b)?a:b;
int max=(a>b)?a:b;
for(int i=min;i<=max;i++)
{
sum+=i;

}
printf("sum: %d\n",sum);











    
    return 0;
}