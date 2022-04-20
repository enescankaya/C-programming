#include <stdio.h>
#include<stdlib.h>

int main()
{
    float a,b,c,avarage;// float kesirli sayilarin onemli oldugu islemlerde kullaniriz//
    printf("enter a number");
    scanf("%f", &a);//float icin %f kullaniyoruz//
    printf("enter a number");
    scanf("%f", &b);
    printf("enter a number");
    scanf("%f", &c);
    
    avarage=(a+b+c)/3;
    printf("avarage : %f\n", avarage);
    return 0;
    
    
}

