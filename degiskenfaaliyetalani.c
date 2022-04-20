#include <stdio.h>
#include <stdlib.h>
int a=10;
int main()
{
    int c=9;
   
   { 
       int a=2;
       printf("%d\n",a);/*a burada 2 olur*/

   }
   
   
   printf("%d\n",a);/*a burada 10 olur*/
   fo4(c);
   printf("%d\n",c);


   

    
    
    
    
    
    return 0;
}

int fo4(int c)
{
    c=a;
    return c;
    

}