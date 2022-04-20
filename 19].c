#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    for(int i = 1; i <=9; i++)
    {
        printf("\n%d x %d : %d",i,a,i*a);
    }
    printf("\n");

    return 0;
}