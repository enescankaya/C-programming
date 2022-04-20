#include <stdio.h>
int func(int x[],int size)
{
    if(size==0)
        return x[size];
    return x[size]+func(x,size-1);
}
int main()
{
    int a[5]={1,2,3,4,5};
    printf("sum of elements: %d\n",func(a,4));
    return 0;
}