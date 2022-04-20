#include <stdio.h>
#include <math.h>
int main()
{

int a;
int digit;
printf("enter a number");
scanf("%d",&a);
digit=((int)log10(a))+1;

printf("\ndigit of number : %d\n",digit);


    return 0;
}