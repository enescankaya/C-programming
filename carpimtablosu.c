#include <stdio.h>
void func(int x)
{
    int i=1;
    if(x<10){
    for(;i<=10;i++)
    {
        printf("%d*%d:%d \t",i,x,i*x);
    }
            printf("\n");

    func(x+1);}
    }
int main()
{
    func(1);

    return 0;

}
