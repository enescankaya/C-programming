#include <stdio.h>
#include <string.h>
int main()
{
    int a=0; 
    char x;
    printf("enter words: ");
    while((x=getchar())!=13)
    {   
        a++;
    
     }
    printf("%d\n",a);
    return 0;
}