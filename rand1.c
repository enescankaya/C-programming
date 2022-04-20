#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
    int i, sayi;
    
    srand(time(NULL));
    
    for(i = 0 ; i < 10 ; i++)
    {
        sayi = rand() %9+1;
        printf("%d\t",sayi);
    }
   
    return 0;
}
