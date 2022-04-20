#include <stdio.h>
void func(int a)
{
    if (a==1){
    printf("\t*");
    }
    else
    {
            printf("\t*");
            func(a-1);
     }
}

int main()
{
    int x,i=1;
    printf("how much times do you want to create row of triangel?");
    scanf("%d",&x);
    for(;i<=x;i++)
    {
    func(i);
    printf("\n");
    }
    getchar();
    return 0;
}