#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int size,i=0;
    char *y,*z;
    z=(char *)malloc(4*sizeof(char));
    y=(char*)malloc(4*sizeof(char));
    printf("enter a sentence: ");
    gets(z);
    size=strlen(z);
    printf("size of sentence : %d\n",size);
    
    free(y);
    free(z);
    return 0;
}