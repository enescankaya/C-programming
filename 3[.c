#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int *array, int leftindex,int rightindex)
{
    int temp;
    if(array[leftindex]<array[rightindex])
    {
        temp=array[leftindex];
        array[leftindex]=array[rightindex];
        array[rightindex]=temp;
    }
}
void Fun1(int *array,int leftindex,int rightindex)
{
    if(leftindex<rightindex)
    {
        swap(array,leftindex,rightindex);
        Fun1(array,leftindex+1,rightindex-1);
    }
}

int main()
{
    int StudentNumber[10]={2,0,1,0,2,1,3,0,6,1};
    int k;
   
    Fun1(StudentNumber,0,9);
    printf("\nThe Array after Fun1\n");
    for(k=0;k<10;k++)
    {
        printf("%d ",StudentNumber[k]);
    } 
    return 0;
}
