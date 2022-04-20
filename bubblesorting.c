#include <stdio.h>

void pubblesort(int a[],int size)
{
    int temp,i,j;

for(i=0;i<size;i++)
{
    for(j=1;j<size-i;j++)
    {
    if(a[j-1]>a[j])
    {
        temp=a[j-1];
        a[j-1]=a[j];
        a[j]=temp;
    }}
}
for(j=0;j<size;j++)
{
    printf("%4d ",a[j]);
}





}
int main(){
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("enter %d. number: ",i+1);
        scanf("%d",&a[i]);
    }
    pubblesort(a,5);
    return 0;

}
