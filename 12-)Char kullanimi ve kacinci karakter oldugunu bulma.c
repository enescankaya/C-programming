#include <stdio.h>

int main(int argc, const char * argv[]) {
    char isim[30];//[]Buraya kullanicinin girecegi karakterin max. buyuklugune gore bir karakter sayisi ata
    char soyisim[50];

    printf("isminizi giriniz");
    scanf("%s", isim);//yaziyla isimiz oldugu zaman %s kullaniyoruz
    printf("soyisim giriniz");
    scanf("%s", soyisim);
    printf("Merhaba %s %s\n",isim,soyisim);
    printf("isminizin 3. harfi %c'dir\n",isim[2]);//karakter[sayi] girdigimiz zaman "%c" ibaresini kullanarak siralama olarak 0 1 2 3 olarak istedigimiz siradaki harfi kullanabiliriz.
    printf("soyisminizin 4. harfi %c'dir\n",soyisim[3]);//enes ismindeki 0. karakter e dir, 1. karakter n dir!! unutma 0 dan baslar.
    
    
    return 0;
}
