#include <stdio.h>
#include <math.h>
int main()
{
long long int a;
int sum;
int digit;
int i;
int b;
int temp;

printf("enter a number: ");
scanf("%lld",&a);
printf("Armstrong number between 1 to %lld are: \n", a);


for(i=1; i<=a; i++)
{
    sum=0;
    temp=i;
    digit=(int)log10(temp)+1;
while(temp>0)
{
    b = temp%10;
    sum=sum+(pow(b,digit));
    temp/=10;


}
if (i==sum)
{
    printf("%d, ",i);
}
}
    return 0;
}