
#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a = 1;
    int b = 1;
    int i;
    printf("%d\n%d\n",a,b);
    for (i=1;i <=10; i++)//12 kez 1 den 10dan kucuk olana kadar 1 er arttir
    {
        int temp = b;
        b=a+b;
        a = temp;
        printf("%d\n",b);

        
        
        
        
    }
    
    return 0;
}
