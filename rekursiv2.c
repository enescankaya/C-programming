#include <stdio.h>
int fonk(int a[],int b);
int main()
{
    int a[10];

    for(int i =0;i<10;i++)
    {
        printf("enter %d. number:",i+1);
        scanf("%d",&a[i]);

    }
    printf("max number: %d\n",fonk(a,10));
}


int fonk(int a[],int b)
{
    static int max=0;
    if(b>=0)
    {
        if(a[b]>max)
        {
            max=a[b];
        }   
        fonk(a,b-1);
        
    }
    return max;

}