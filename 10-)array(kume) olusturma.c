#include <stdio.h>
int main(int argc, const char * argv[]) {
   
    int sayikumesi[] = {1,2,3,4,5};//bu ifade ile bir sayi kumesi olusturup icindekileri 0 dan n e kadar olacak sekilde kullanabiliriz. int yaziyorsak icindekiler integer olmali float yazarsak icine float degerler yazmaliyiz.
    int i;
    for (i = 0; i<5;i++)
    {
        printf("%d\n",sayikumesi[i]);//i. degeri yazdir anlama gelir. sirayla yapabilmek icin for dongusune sokuyoruz.
    }
    
    
    return 0;
}
