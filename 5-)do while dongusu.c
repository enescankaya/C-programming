
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=9;
    do {//bu yapi cok tercih edilmez cunku once islemi yapip sonra kosula bakiyor.
        printf("%d--Hello user\n",10-a);//bu da bazi durumlarda yanlis sonuc veriyor.
        a--;
    }
    while(a>=0);//while(1) yaparsak sonsuz dongu acmis oluruz.
    
    return 0;
}
