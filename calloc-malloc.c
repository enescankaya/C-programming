#include <stdio.h>
#include <stdlib.h>
void *func(int arr1[],int size1,int arr2[],int size2,int *x)
{
    int i=0;j=0;
    if (*(arr1+i)>=*(arr2+j))

        
    
}int main()
{

    int arr1[5]={8,5,9,20,62};
    int arr2[5]={13,7,24,97,14};
    int *z=calloc(10,sizeof(int));
    func(arr1,5,arr2,5,z);
    
    for(int i=0;i<10;i++)
        printf("%d\n",*(z+i));
    free(z);
    
    return 0;
}