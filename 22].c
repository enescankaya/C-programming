#include <stdio.h>
#include<math.h>
int main()
{
    int a;
    int i = 1;
    int sumdigit = 0;
    int b;
    int c;
    int swapnumber;
    int digitsum;
    int j;
    int first;
    int last;
    
    printf("sayi gir:");
    scanf("%d",&a);
    int temp = a;
    j=(round)(log10(a));
    digitsum=(log10(a));
    last=a%10;
    first=a/(pow(10,digitsum));
    swapnumber=(last*pow(10,digitsum));
    swapnumber=swapnumber+a%(int)(pow(10,digitsum));
    swapnumber=swapnumber-last;
    swapnumber=swapnumber+first;
    if(last==first)
    {
       
        printf("Please enter a number which i can change last and first digits with them\n");
        
    }
    else
    printf("swapped number: %d\n",swapnumber);
    return 0;
    }