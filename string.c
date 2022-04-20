#include <string.h>
#include <stdio.h>
int main()
{
    int i=0,b;

    char a[109];
    printf("enter a string: ");
    gets(a);


    
for(;a[i]!='\0';i++)
{
    
    if(a[i]>96 && a[i]<123 || a[i]>='A' && a[i]<='Z' )
    {
        continue;  
    }
    
    for(b=i;a[b]!='\0';b++)
    {
        a[b]=a[b+1];
        
    }
    i--;
    
}
printf("%s",a);
    

printf("\n");
    
    
    return 0;
}