/*#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int toplam = 0;
    for (i=0;i<=10;i++)
    {
        if (i%2==1)//continue demek alttaki hicbir islemi yapma dongunun basina don demektir. yani eger mod 1 degilse devam ettir alttaki islemleri yapma demektir.
        {
            continue;
        }
        toplam +=i;
    }
    printf("%d\n",toplam);
    return 0;
}
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0;
    int toplam = 0;
    while (i<=10)
    {
        if (i%2==1)
        {
            i++;
        continue;//while kullanirkan continue ye dikkat et sonsuz donguye girer yoksa. onun icin continue den once i++ koyduk. yoksa i surekli 0 olarak kabul olacak ve sonsuz donguye girilecekti.!!
            
        }
        toplam +=i;
        i++;
        
    }
    printf("%d\n",toplam);
    return 0;
}

