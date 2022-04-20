
#include <stdio.h>

int main()
{

    int toplam = 0;
    int a;
    
    for(; ;)//(; ;) for dongusunde bu sonsuz anlamina gelmektedir.
    {
        printf("sayiyi giriniz (Cikmak icin -1 e basiniz):");
        scanf("%d",&a);
        if (a==-1)
        {
            break;//kosul saglandiginda cik demektir 
        }
        toplam+=a;
    }

    
    printf("toplam: %d",toplam);
    return 0;
}

