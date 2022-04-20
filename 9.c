#include <stdio.h>
#include <math.h>
int main()
{
int a;
int sum=0;
int digit;

printf("enter a number: ");
scanf("%d",&a);
digit=((int)(log10(a)))+1;
int temp=a;
while(a>0)
{
    int b = a%10;
    sum+=pow(b,digit);
    a/=10;


}
if (sum==temp){

printf("%d is a armstrong number.\n",temp);}
else{

printf("%d is not a armstrong number.\n",temp);}




    return 0;
}