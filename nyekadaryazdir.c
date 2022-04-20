#include <stdio.h>

void func(int x)
{
    if(x!=1)
    func(x-1);

    printf("%d\n",x);


}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    func(n);
    return 0;
}
