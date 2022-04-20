#include <stdio.h>
#include <math.h>
int main()
{

int a;
int c;
int new=0;
printf("enter a number: ");
scanf("%d",&a);
int temp;
temp = a;
while(a>0)
{
    c = a%10;
    new=new*10+c;
    a=a/10;

}
if(new==temp)
printf("%d is a palindrome number\n",temp);
else
printf("%d is not a palindrome number\n",temp);




    return 0;
}