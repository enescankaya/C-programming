#include <stdio.h>

int fonk(int a)
{
printf("hata kodu %d\n",a);
}
int main()
{
    int b;
    printf("enter a number:");
    scanf("%d",&b);
    if(b<0)
    
        fonk(404);
    
    else 
    printf("tebrikler\n");
    return 0;


}