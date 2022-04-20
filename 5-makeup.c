#include <stdio.h>
#include <stdlib.h>
int max=0,i=0;
void func(int a[],int size)
{
    if(i==10)
    printf("max: %d\n",max);
    else
    {
        if(a[i]>max)
        max=a[i];
        i++;
        func(a,size);
    }
}
int main()
{
    int b[10]={2,0,1,0,2,1,3,0,6,1};
    func(b,10);
    return 0;
}