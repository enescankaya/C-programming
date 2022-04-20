#include <stdio.h>

int main()
{
    int sum =0;
    for (int i = 2000; i>=1000; i=i-2)

    {
        printf("%4d ",i);
        sum+=i;
    }
    
    printf("sum : %d", sum);
    
    
    
    return 0;
}