#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_t, end_t;/*burada clock_t zamanla ilgili yapacagimiz islemlerde degisken tipidir start_t falan bizim verdigimiz isimlerdir*/
    register int id1,id2;

    start_t = clock();/*burada assagidaki kodlari okumadan onceki zamani aliyoruz*/

    for(id1=0;id1<2000000;id1++){
        for(id2=0;id2<100;id2++)
        {}
    }
    end_t=clock();
    printf("start_t degeri: %lu\n",start_t);
    printf("end_t degeri:%lu\n",end_t);
    printf("dongu calisma suresi(saniye): %.6f\n",(double)(end_t-start_t)/CLOCKS_PER_SEC);
    return 0;


}