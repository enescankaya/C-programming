#include <stdio.h>
int main()
{
    int a[16],b[16],i,j,k,l=0,z=15;
    for(i=0;i<16;i++)
    {
        printf("enter a number");
        scanf("%d",&a[i]);

    }
    for(j=0;j<16;j++)
    {
        if(a[j]%3==0)
        {
            b[l]=a[j];
            l++;

        }
        else{
            b[z]=a[j];
            z--;

        }
        
    }
    
       for(k=0;k<16;k++)
    {
        printf("%d ",b[k]);
    }

    
    
    
    return 0;
}