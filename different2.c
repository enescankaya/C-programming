#include <stdio.h>
#include <stdlib.h>
int oddRec(int a[],int size)
{
    if(size==0)
    {
        return 0;
    }
    if(a[size-1]%2!=0)
    return 1+oddRec(a,size-1);
    else
    return oddRec(a,size-1);

}
int main()
{
    int a[10]={2,0,1,0,2,1,3,0,6,1};
    printf("odd number(s): %d\n",oddRec(a,10));    
    return 0;
}