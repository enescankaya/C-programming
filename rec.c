#include <stdio.h> 
void tablo(int x) {
   int control;
   if(x==2)
   {
       return 2;
   }


for(int i = 2; i<x;i++)
{
    
    if(x/i==0)
    {
        control=1;

    }
    else
    {
        control=0;

    }
    
}
if(control==0)
{
    printf("%4d",x);
    tablo(x-1);
}



}
int main(void){ 
int x;
printf("enter a number:");
scanf("%d",&x);
tablo(x);
return 0;
}