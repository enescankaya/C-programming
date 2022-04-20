#include <stdio.h>
#include <string.h>

void strng(char a[])
{
    

    for(int i = 0;a[i]!='\0';i++)
    {
        a[i]=a[i]-32;


    }
     
     

}

int main()
{
    char a[100],b[100];

    printf("enter words: ");
    gets(a);
    strng(a);
    printf("%s\n",a);
    printf("enter words: ");
    gets(b);
    strng(b);
    printf("%s\n",b);
    return 0;




} 