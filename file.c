#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int no;
    char name[40];
    int balance;
    FILE *file;
    if((file=fopen("file3.dat","w"))==NULL) printf("no file!!!\n");
    else{
        printf("enter no, number and balance repectively: ");
        printf("to end up the enterance please click ctrl+Z");
        printf("?");
        scanf("%d %s %d",&no,name,&balance);
    
    while(!feof(stdin)){
    fprintf(file,"%d %s %d",no,name,balance);
    printf("?");
    scanf("%d %s %d",&no,name,&balance);
}
fclose(file);
    }
    return 0;
}