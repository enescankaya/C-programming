#include <stdio.h>
int main()
{
    int a[10]={1,6,0,3,1,2,0,1,0,2};
    int *m,**k;
    m=a;
    printf("m in adresi: %d\n",m);
    printf("Output 1: %d\n",*(m+1));
    *(m+2)+=3;
    m+=4;
    printf("Output 2: %d\n",(m+1));

    m=&a[1];
    k=&m;
    printf("Output 3: %d\n",*(*(k)+1));
    printf("Output 4: %d\n",*k);
    m=m-1;
    printf("Output 5: %d\n",*k);
    return 0;
}