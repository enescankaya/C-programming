#include <stdio.h>

int main()
{
    int n;
    int f=1;
    printf("enter a number");
    scanf("%d", &n);
    for(int i = 1;i <=n;i++)
    {
    f*=i;
    }
    printf("%d factoriel : %d\n",n,f);
    return 0;
}