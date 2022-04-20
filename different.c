#include <stdio.h>
#include <stdlib.h>
void func(int a,int *b,int *c)
{
    int j=0,k=0;
    while(a!=0)
    {
        if(a%2==0){
        b[j]=a%10;
        j++;
        b=realloc(b,(j+1)*sizeof(int));
        }
        else{
        c[k]=a%10;
        k++;
        c=realloc(c,(k+1)*sizeof(int));
        }
        a/=10;
    }
    for(int l=0;l<j;l++)
    {
        printf("%d ",b[l]);
    }
    printf("\n");
    for(int z=0;z<k;z++)
    {
        printf("%d ",c[z]);
    }
        printf("\n");


}
int main()
{
    int a=2010213061;
    int *b=(int *)malloc(1*sizeof(int));
    int *c=(int *)malloc(1*sizeof(int));
    func(a,b,c);
}