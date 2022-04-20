#include <stdio.h>
#include <math.h>

int main()
{
   double a,b,i=2,fact=1,c,k,m;
   long double sum = 1;
   printf("enter a number: ");
   scanf("%lf",&a);  
   printf("enter a number: ");
   scanf("%lf",&b);
    for(int j = 1;j<b;j++)
    {
        if(j%2==1)
        {
            c=-1;
        }
        else{
            c = 1;
        }
        fact=1;
        k=1;
        for(k=1;k<=i;k++)
        {
           fact*=k;
        }
        m=(pow(a,i))/fact;
        m*=c;

        sum=sum+m;
        i+=2;
        

     

    }
    printf("sum: %Lf\n",sum);

    return 0;
}
