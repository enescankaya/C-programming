#include <stdio.h>
int main()
{
   int a,b;
   int temp;
   int sum = 0;
   printf("enter a number: ");
   scanf("%d",&a);
   temp=a;
   while(temp>0)
   {
       b=temp%10;
       sum=sum*10+b;
       temp/=10;
   }
   if(sum==a)
   {
       printf("%d is a Palindrome\n",a);

   }
   else
          printf("%d is not a Palindrome\n",a);

    return 0;
}
