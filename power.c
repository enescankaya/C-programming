#include <stdio.h>
long func(long int x,long int y)
{
    if(y==0)
    return 1;
    return x*func(x,y-1);
}

int main()
{
 long int x,y;
 printf("enter base and power: ");
 scanf("%ld %ld",&x,&y);
 printf("%ld over %ld : %ld\n",x,y,func(x,y));
  return 0;
} q