#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    printf("enter temperature");
    scanf("%d",&a);
    if(a>=0)
        printf("%d is above freezing point",a);

    else
        printf("%d is below freezing point",a);

    
    return 0;
}
