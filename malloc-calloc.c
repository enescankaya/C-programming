#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int x,y;
    printf("enter size of your name ");
    scanf("%d",&x);
    char *c=(char *)malloc((x+2)*sizeof(char));
    strcpy(c,"enes ");
    printf("enter size of your surname ");
    scanf("%d",&y);
    realloc(c,sizeof(y));
    strcpy(c,"enes cankaya");
    puts(c);
    free(c);
    return 0;
}