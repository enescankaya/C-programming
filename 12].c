#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    double step;
    double f;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number:");
    scanf("%d",&b);
    printf("enter step:");
    scanf("%lf",&step);
    int min=(a<b)?a:b;
    int max=(a>b)?a:b;
    f=(max-min)/step;
    printf("step: %lf\n", f);

    for(double i = min;i<=max;i=i+f)
    {
        printf("%f\n",i);

    }

    
    

    
    return 0;
}
