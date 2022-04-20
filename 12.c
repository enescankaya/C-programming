#include <stdio.h>
#include <string.h>


int main()
{
    char a[20],b[20];
    printf("name: ");
    gets(a);
    printf("surname: ");
    gets(b);
    strcat(a,b);
    printf("%5s\n",a);
    
    
    return 0;
}