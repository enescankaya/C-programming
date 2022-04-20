#include <stdio.h>
void enbuyuk(long long int number[])
{
    long long int max=0;
    long long int max1;
    for(int i =0;i<10;i++)
    {
    if(number[i]>max)
    {
        max1=max;
        max=number[i];
    }
    }
    printf("max numbers: %lld, %lld\n",max,max1);    
}
int main()
{
long long int number[10];
    for(int j = 0;j<10;j++)
    {
        printf("enter %d. number: ",j+1);
        scanf("%lld",&number[j]);
    }
    enbuyuk(number);
    return 0;
}