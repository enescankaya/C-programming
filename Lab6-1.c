#include <stdio.h>
#include <stdlib.h>  
void func(int *a,char *b,int num)
{
    int j=0;
    int i=0;
    while(num>0){
    if((num%10)%2==0)
    {      
        b=realloc(b,(i+1)*sizeof(char));
        *(b+i)=num%10;
        i++;
        num/=10;
    }
    else
    {
        a=realloc(a,(j+1)*sizeof(int));
        *(a+j)=num%10;
        j++;
        num/=10;
    }
    
    }
}
int main()
{
    int num=2010213061;
    int *a = malloc(1 * sizeof(int));
    char *b  = malloc(1 * sizeof(char));
    func(a,b,num);
        for(int m=0;m<2;m++)
    {
        printf("%d ",a[m]);
    }
    printf("\n");
    free(a);
    free(b);
    return 0;
 
}