#include <stdio.h>
int main(void)
{
  int sum=0,a,r;
    printf("enter a number to convert binary: ");
    scanf("%d",&a);
    while(a>0)
      {
     r=a%2;
     sum=sum*10+r;
     a/=2;


  }
        while(sum>0)
        {
        printf("%d",sum%10);
        sum/=10;


        }
        printf("\n");



    return 0;

}