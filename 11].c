#include <stdio.h>
#include <math.h>
int main()
{
int a,b,sum = 0,product = 1;

for(int i = 0;i < 10;i++)
{
printf("enter %d. number:",i+1);
scanf("%d",&a);
sum+=a;
product*=a;

}
printf("sum of the numbers: %d\nproduct of the numbers:%d1\n",sum,product);


    return 0;
}