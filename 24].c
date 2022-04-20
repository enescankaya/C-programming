#include <stdio.h>
#define base 10

int main(int argc, const char * argv[]) {
     long long int a,b;
     int c[base];
     int lastdigit;
printf("enter a number");
scanf("%lld",&a);
     for (int i = 0; i<base;i++)
     {
         c[i]=0;
     }
        while (a!=0)
    {
        lastdigit=a%10;
        a/=10;
        c[lastdigit]++;
    }
        
        for(int j = 0; j<base;j++)
        {
            printf("number of %d: %d\n",j,c[j]);

        }


   

    
    return 0;
}
