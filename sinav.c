#include <stdio.h>
#include <stdlib.h>
float func(int n)
{
    if ( n==0)
        return 0;
        return 1/(1+(n-1))+func(n-1);
     
}

int main()
{
    int n;
    printf("enter size of elements: ");
    scanf("%d",&n);
    printf("sum of elements : %f\n",func(n));
    
    
    return 0;
}