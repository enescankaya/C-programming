#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    int HCF=1;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
   
   
    while (a%2==0 && b%2==0)
    {
        HCF*=2;
        a/=2;
        b/=2;

    }
    while (a%3==0 && b%3==0)
    {
        HCF*=3;
        a/=3;
        b/=3;
    }
     while (a%5==0 && b%5==0)
    {
        HCF*=5;
        a/=5;
        b/=5;
    }
    while (a%7==0 && b%7==0)
    {
        HCF*=7;
        a/=7;
        b/=7;
    }
    printf("HCF of %d and %d : %d\n",a,b,HCF);
       
    
    return 0;
}
