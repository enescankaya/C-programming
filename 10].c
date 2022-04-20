#include <stdio.h>
#include <math.h>
int main()
{
int a;
int b;
int c;

printf("enter first number:");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
if(a>b && a>c)
printf("max: %d\n2",a);
if(b>a && b>c)
printf("max: %d\n",b);
if(c>b && c>a)
printf("max: %d\n",c);


    
    return 0;
}