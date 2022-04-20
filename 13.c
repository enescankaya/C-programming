#include <stdio.h>
#include <string.h>


int main()
{
    char a[20],b[20];
    int c;
    printf("first: ");
    gets(a);
    printf("second: ");
    gets(b);
    c = strcmp(a,b);
    
    if(c==0)
    printf("characters are same\n");
    else
    printf("characters are not same\n");


    
    
    return 0;
}