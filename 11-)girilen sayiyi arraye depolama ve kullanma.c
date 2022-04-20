#include <stdio.h>

int main(int argc, const char * argv[]) {
    float toplam = 0.0;
    float sayilar[5];//depolamak istedigin adeti [] icine yaz. bu float veya int olabilir
    int i;
    for (i = 0;i < 5 ; i++)
    {
        printf("bir sayi giriniz");
        scanf("%f", &sayilar[i]);//for dongusune sokma sebebimiz sayiyi her defasinda bir sonraki bloga yerlestirmek.
        toplam+=sayilar[i];//i. sayiyi kullanmak icin sayilar[i] kullandik.
        
    }
    printf("aritmetik ort: %.2f\n",toplam/5);
    
    return 0;
}
