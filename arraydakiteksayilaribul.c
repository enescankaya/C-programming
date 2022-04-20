#include <stdio.h>
int func(int a[],int size)
{
    if(size==0)
    {
        if(a[size]%2!=0)
        {
            return 1;
        }
        else
        return 0;
    }
    if(a[size]%2!=0)
    {
        return 1+func(a,size-1);
    }
    else
    return func(a,size-1);
}

int main()
{

int a[5];
for(int i=0;i<5;i++)
{
    printf("enter %d. number: ",i+1);
    scanf("%d",&a[i]);
}
printf("%d\n",func(a,5));



    return 0;

}