#include <stdio.h>

void sicaklik(float a[],int size)
{
    int a1=0, a2=0, a3=0 , a4=0 , i;
    for(i=0;i<size;i++){
        if ( a[i]>=-25 && a[i]<-10)
        {
            a1++;
        }
        else if ( a[i]>=-10 && a[i]<5)
        {
            a2++;
        }
        else if ( a[i]>=5 && a[i]<20)
        {
            a3++;
        }
        else if ( a[i]>=20 && a[i]<=35)
        {
            a4++;
        }
    
    }
    printf("[-25,-10):%d\n[-10,5):%d\n[5,20):%d\n[20,35]:%d\n",a1,a2,a3,a4);
}
int main()
{
    float karabuksicaklik[365]={1.2,2.55,3,10,-10.6,-2,-20,8,25,50};
    sicaklik(karabuksicaklik,365); 
    return 0;
}