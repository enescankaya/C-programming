#include <stdio.h>
int main()
{
    int a,j;
    printf("enter term: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        j=i;
        while(j>0)
        {
            printf("%d",j%2);
            j-=1;
        }
        printf("\n");

    }    

return 0;
}