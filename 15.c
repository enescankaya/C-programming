#include <stdio.h>
#include <math.h>

int main()
{
    int b;
    
    printf("satir ve sutun sayisi giriniz");
    scanf("%d",&b);
    int a[b][b];
    int c[b][b];
    int d[b][b];
    for(int i =0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("ilk matrix icin %d. sutundaki %d. satiri giriniz: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            printf("ikinci matrix icin %d. sutundaki %d. satiri giriniz: ",i+1,j+1);
            scanf("%d",&c[i][j]);

        }
    }
    printf("\n");
    for(int i =0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            d[i][j]=a[i][j]+c[i][j];
        }
    }
         printf("\n");
        for(int i =0;i<b;i++)
    {   printf("\n");
        printf("%d.satir --> ",i);
        for(int j=0;j<b;j++)
        {
        printf(" %5d",d[i][j]);

        }
    }
printf("\n");


    return 0;
}