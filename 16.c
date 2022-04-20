#include <stdio.h>
#include <math.h>

int main()
{
    int b;
    int a[10][2];
    int sumboy=0;
    int sumkilo=0;

    for(int i =0;i<10;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d. ogrencinin boyunu giriniz giriniz: ",i+1);
            scanf("%d",&a[i][j]);
            sumboy+=a[i][j];
            j++;
            printf("%d. ogrencinin kilosunu giriniz giriniz:",i+1);
            scanf("%d",&a[i][j]);
            sumkilo+=a[i][j];
            

        }
    }
        float ortboy=sumboy/10;
        float ortkilo=sumkilo/10;
        printf("ortalama boy: %f\n",ortboy);
        printf("ortalama kilo: %f\n",ortkilo);


    return 0;
}