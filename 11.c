#include <stdio.h>

int main()
{
    char a[100], temp;
    int i;
    printf("type a sentence or word: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%d. word: %c\n",i+1,a[i]);
        printf("---> %c\n",a[i]-32);
        printf("---> %c\n",a[i]+1);

    }

    printf("swapped: \n\n");
    temp=a[0];
    a[0]=a[i-1];
    a[i-1]=temp;

    printf("%s\n",a);

return 0;
}