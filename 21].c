#include <stdio.h>
#include <math.h>
int main()
{

int a;
int digit;
int last;
int first;
printf("enter a number");
scanf("%d",&a);
last=a%10;
digit=((int)log10(a));
first=a/(pow(10,digit));


printf("\nfirst digit of number : %d\nlast digit of number : %d\n",first,last);


    return 0;
}