#include <stdio.h>

int main()
{
  int a;
  int b;
  int p=1;
  int c=1;
  printf("enter first number");
  scanf("%d",&a);
  printf("enter second number");
  scanf("%d",&b);
  int max=(a>b)?a:b;
    while(1)
{
  if(max%a==0 && max%b==0)
  {
      printf("LCM of %d and %d : %d\n",a,b,max);
      break;
  }  
  max++;
    }
    return 0;
}