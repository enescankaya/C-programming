#include <stdio.h>
int main()
{
    int tutar;
    int islem;
    int bakiye;
    int komisyon;
    printf("Bakiyenizi giriniz");
    scanf("%d", &bakiye);
    printf("********Yapmak istediginiz islemi seciniz********\n\n\n1:Bakiye sorgulama\n2:Para Cekme\n3:Para yatirma\n4:Havale\n5:Kart iade\n");
    printf("islem:");
    scanf("%d",&islem);
    
    switch(islem)
    {
        case 1:
            printf("Bakiyeniz: %d \n",bakiye);
            break;
            
        case 2:
            printf("Cekmek istediginiz tutari giriniz");
            scanf("%d", &tutar);
            komisyon=tutar*(2/100);
            if(tutar>=(bakiye-komisyon))
            {
                printf("Yetersiz Bakiye\n");
                
            }
            else{
                komisyon=(tutar*2)/100;
                bakiye=bakiye-tutar-komisyon;
                printf("Kalan Bakiye: %d\n",bakiye);
            }
            break;
        case 3:
            printf("Yatirmak istediginiz tutari giriniz:");
            scanf("%d", &tutar);
            bakiye+=tutar;
            printf("Yeni bakiyeniz: %d\n",bakiye);
            break;
            
        case 4:
            printf("Havale yapmak istediginiz tutari giriniz:");
            scanf("%d", &tutar);
        komisyon=(tutar*2)/100;
            if (tutar>=(bakiye-komisyon))
            {
                printf("Yetersiz bakiye\n");
                
            }
            else
            {
                komisyon=(tutar*2)/100;
                bakiye=bakiye-tutar-komisyon;
                printf("Kalan bakiyeniz: %d\n",bakiye);
            }
            break;
            
        case 5:
            printf("Lutfen kartinizi atm'den aliniz");
            break;
            
    }
    
    return 0;
}
