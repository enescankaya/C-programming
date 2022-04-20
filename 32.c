#include <stdio.h>

int main()
{
 int a[]={100,95632,6765323,1454152,24632425,67537633,543645637,23418,94632,10};
 int *p = a;
 int b = 104024;
 int *d = &b;
 int *c = p;
 char m[]="merhaba";
 char *s=m;

 
 printf("******************************************INT DIZI\n");

 printf("a[4]:%d\n*p:%d\np[3]:%d\np:%p\n",a[4],*p,p[3],p+1);
 printf("******************************************INT NORMAL\n");
 printf("b:%d\n*d:%d\nd:%p\n",b,*d,d);
 printf("******************************************POINTERI POINTERE ESITLEMEK\n");
 printf("*c:%d\nc:%p\nc[4]:%d\n",*c,c,c[4]);
 printf("******************************************STRING ILE POINTER\n");
 printf("m:%s\n*s:%c\ns[5]:%c\ns:%p\n",m,*s,s[5],s);

    
    return 0;
}