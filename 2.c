#include <stdio.h>
#include <math.h>

int main()
{
   printf("enter numbers of equation a, b, c respectively (ax^2+bx+c=0)\n");
    float a;
    float b;
    float c;
    float x1;
    float x2;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
if (pow(b,2)-(4*a*c)>0)
{
   x1=(-b+sqrt(pow(b,2)-(4*a*c)))/2*a;
   x2=(-b-sqrt(pow(b,2)-(4*a*c)))/2*a;
   printf("x1: %f\nx2: %f\n",x1,x2);
}

else if (pow(b,2)-(4*a*c)==0)
{
    x2=(-b-sqrt(pow(b,2)-(4*a*c)))/2*a;
    printf("x1: %f\nx2: %f\n",x2,x2);

}
else if (pow(b,2)-(4*a*c)<0)
{

    printf("No root\n");


}
    return 0;
}