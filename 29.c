#include <stdio.h>


int main()
{
    char a[200];
    int i;
    printf("type a sentence or word: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='i')
        a[i]='I';
        else if(a[i]=='a')
        a[i]='A';
        else if(a[i]=='u')
        a[i]='U';
        else if (a[i]=='o')
        a[i]='O';

    }

    printf("%s\n",a);

return 0;
}
