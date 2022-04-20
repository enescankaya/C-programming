#include <stdio.h>
int fonk(int x, int y)
{
  static  int min,max,z=1,hcf;
if(x>y){
    max=x;
    min=y;
}
else if (y>x)
    {
        max=y;
    min=x;
    }
    else
    {
    return x;
    }
    if(max%min==0)
    {
        return min;
    }
    if(z<min)
    {
    if (x%z==0 && y%z==0)
    {
        hcf=z;
        z++;
        fonk(x,y);

    }
    z++;
    fonk(x,y);

    }
    return hcf;
}
    






int main()
{
    int x,y;
    printf("enter two number:");
    scanf("%d%d",&x,&y);
    printf("highest common factor: %d\n",fonk(x,y));
    return 0;
}