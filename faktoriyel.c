#include <stdio.h>

int factoriel(int number)
{
    int fact=1;
    for(;number>0;number--)
    {
        fact*=number;
    }
    return fact;
}
int main()
{
    int number;
    printf("entera a number: ");
    scanf("%d",&number);

    printf("factoriel of %d: %d\n",number,factoriel(number));
    return 0;
}
