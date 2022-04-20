#include <stdio.h>
int main()
{
    int c=1;
    float a,i;
    float sum=0;
    printf("enter a number");
    scanf("%f",&a);
    for(i = 1;i<=a;i++)
    {
        sum+=(1/i);
        printf("%d. term-->1/%d\n",c,c);
        c++;

    }
    printf("total sum: %f",sum);
    return 0;
}