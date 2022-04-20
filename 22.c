#include <stdio.h>
int main(void)
{
  int sum=0;
  for(int i = 100; i<=200;i++)
  {
      if(i%9==0)
      {
          printf("--> %d\n",i);
          sum+=i;

      }
  }
        printf("sum: %d\n",sum);






    return 0;

}