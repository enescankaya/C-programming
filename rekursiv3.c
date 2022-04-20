#include <stdio.h>
long fonk(long a)
{
    static int sum=0;
    if(a>0)
    {
        sum= a%10+fonk(a/10);

    }
    return sum;
}

int main()
{
    long long int x;
    printf("enter a number:");
    scanf("%lld",&x);
    printf("sum of digits: %3ld\n",fonk(x));
    return 0;

}
