#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
int x,y,c,d,sum,sum1;
srand(time(NULL));
x= 1+ (rand()%6);
y= 1+ (rand()%6);
sum = x+y;
printf("********first dice:%d *********\n",x);
printf("********second dice:%d*********\n",y);
printf("********* sum:%d *********\n",sum);
if (sum==7 || sum==11)
{
    printf("****************************\nCongratulations! you win.\n");

}
else if(sum==2 || sum==3 || sum == 12)
{
    printf("*****************************\nYou Lost.\n");
}
else
{
    printf("*****************************\n ******** your point:%d ********\n",sum);
    printf("*****************************\n");
    for(; ;)
    {
        c=1+ (rand()%6);
        d=1+ (rand()%6);
        sum1=d+c;

        if(sum1==7){
            printf("******** first dice:%d ********\n",c);
            printf("******** second dice:%d ********\n",d);
            printf("********* sum:%d ********\n",sum1);
            printf("*****************************\nYou lost\n");
            break;
        }
        else if(sum1==sum)
        {
            printf("******** first dice:%d ********\n",c);
            printf("******** second dice:%d ********\n",d);
            printf("********* sum:%d ********\n",sum1);
            printf("*****************************\nCongratulations! you win.\n");
            break;

        }
        else
        {
            printf("******** first dice:%d ********\n",c);
            printf("******** second dice:%d ********\n",d);
            printf("********* sum:%d ********\n",sum1);
            printf("*****************************\n");
            continue;
        }
    }
}
return 0;
}