#include <stdio.h>
#include <stdlib.h>
int main()
{
    int boyut, *dizi,add;
    printf("enter size of array:");
    scanf("%d",&boyut);
    dizi=(int*)calloc((boyut),sizeof(int));
    for(int i = 0;i<boyut;i++)
    {
        printf("enter %d. number", i+1);
        scanf("%d",dizi+i);
    }
    printf("enter size of numbers you want to add:");
    scanf("%d",&add);
    dizi = (int*)realloc(dizi,(add+boyut)*sizeof(int));
    for(int j =boyut;j<add+boyut;j++)
    {
        printf("enter %d. number",j+1);
        scanf("%d",dizi+j);
    }
    for(int x=0;x<add+boyut;x++)
    {
        printf("%d. number: %d\n",x+1,*(dizi+x));
    }
    free(dizi);

    return 0;
}
