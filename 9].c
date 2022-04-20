#include <stdio.h>
#include <math.h>
int main()
{
int a;
int b;
int c;
int i;

printf("enter first number:");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
printf("enter number which you want to divide :");
scanf("%d",&c);
int min=(a<b)?a:b;
int max=(a>b)?a:b;
for(i = min;i <=max;i++)
{
    
    if(i%c==0)
    
        printf("%3d  \n",i);
    
    
    }




    
    return 0;
}