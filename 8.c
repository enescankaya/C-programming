#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i =2;i<n;i++)
    {
     int control = 0;
     for(int j=2;j<i;j++)
     {
     int kalan=i%j;
        if (kalan==0)
        control=1;
        
     }
     if(control==0)
     sum+=i;
        
    }    
    printf("sum of prime numbers : %d\n", sum);
    return 0;
}