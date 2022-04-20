#include <stdio.h>

int main()
{
    char ISIM[50], SOYISIM[50], YAS[3], SEHIR[20],OKUL[60],karabukuniversitesi = '\0';
    
    printf("ISMINIZ:");
    scanf("%s", ISIM);
    printf("SOYISIM:");
    scanf("%s",SOYISIM);
    printf("YASINIZ:");
    scanf("%s",YAS);
    printf("YASADIGINIZ SEHIR:");
    scanf("%s",SEHIR);
    printf("OKUDUGUNUZ OKUL:");
    scanf("%s",OKUL);
    printf("Merhaba ben %s %s, %s yasindayim ve yasadigim sehir %s. %s okulunda ogrenciyim\n ",ISIM,SOYISIM,YAS,SEHIR,OKUL);
    return 0;
    
    
    
}
