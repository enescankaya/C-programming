#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a=malloc(sizeof(int));
    int b,c;
    for(b=0;;b++)
    {
        printf("enter %d. number: ",b+1);
        a=realloc(a,(b+1)*sizeof(int));
        scanf("%d",a+b);
        if(*(a+b)==0)
        break;
    }
    for(c=0;c<b;c++)
    {
        printf("%d. number : %d\n",c+1,*(a+c));
    }
    free(a);
    return 0;
}