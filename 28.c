#include <stdio.h>
void *sayikontrol(int *a[],int size)
{
    int i,c,kontrol,temp;
    for(i=0;i<size;i++)
    {
        kontrol = 0;
        c=*a[i]%10;
        temp=*a[i]/10;
        while  (temp!=0)
        {
            if (temp%10==c)
            {
                temp/=10;
            }
            else{
            kontrol = 1;
            break;
            }
        }
            if(kontrol==0)
            printf("%d >> tum basamaklar esit\n",a[i]);
            else if (kontrol==1)
            printf("%d >> tum basamaklar esit degil\n",a[i]);


        
    }
}

int main()
{
    int A[10]={233,45,777,81,9999999,36,90,88,11,61};
    int *p=A;
    sayikontrol(&p,10);
    return 0;
}