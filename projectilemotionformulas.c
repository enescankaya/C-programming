#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    double a,initialvelocity;
    int coise;
    double range,time,height;
    printf("enter angle: ");
    scanf("%lf",&a);
    printf("enter initial velocity: ");
    scanf("%lf",&initialvelocity);
    printf("\n1-) time\n2-) height \n3-) range \n");
    printf("make a coise: ");
    scanf("%d",&coise);
    a*=pi/180;
    switch(coise){
    case 1:
    time=(initialvelocity*sin(a))/9.8;
    printf("time: %lf\n",time);
    case 2:
    height=(pow(initialvelocity,2)*pow(sin(a),2))/(2*9.8);
    printf("heigh: %lf\n",height);
    case 3:
    range=(pow(initialvelocity,2)*sin(2*a))/9.8;
    printf("range: %lf\n",range);
    printf("sin(x): %lf\nsin^2(x): %lf\nsin(2x): %lf\n",sin(a),pow(sin(a),2),sin(2*a));

    break;
    default:
    printf("please enter a suitable variable\n");
    }


    return 0;
}