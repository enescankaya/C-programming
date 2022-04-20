#include <stdio.h>
 
int obeb(int, int);
 
int main() {
    int x,y;
    printf("enter 2 numbers:");
    scanf("%d %d",&x,&y);
    int sonuc = obeb(x, y);
    printf("obeb(%d,%d) = %d\n", x, y, sonuc);
    getchar();
    return 0;
}
 
int obeb(int x, int y) {
    static int m=x;
    if(x==1)
    return 1;
    if(y%x==0 && m%x==0)
    return x;
    return obeb(x-1,y);
}