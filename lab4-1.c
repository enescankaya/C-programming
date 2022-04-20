#include <stdio.h>
#include <stdlib.h>
int func(int *z,int size)
{
    int max;
    for(int i =0;i<size;i++)
    {
        if(*(z+i)>*(z+i+1))
        max=*(z+i);
        else
        max=*(z+i+1);
    }

    return max;
}

int main()
{
    int i,n, *z;
    printf("enter number of calloc:");
    scanf("%d",&n);
    z=(int *)calloc(n+1,sizeof(int));
    for(int i = 0;i<n;i++)
    {
        printf("enter %d. number:",i+1);
        scanf("%d",z+i);
    }    
        printf("max: %d\n",func(z,n));


    return 0;
}