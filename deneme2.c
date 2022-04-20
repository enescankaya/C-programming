#include <stdio.h>
#include<math.h>
int main()
{
    int a;
    int i = 1;
    int sumdigit = 0;
    int b;
    int c;
    int swapnumber;
    int digitsum;
    int j;
    int first;
    int last;
    
    printf("sayi gir:");
    scanf("%d",&a);
    int temp = a;
    j=(round)(log10(a));
    digitsum=(log10(a));
    last=a%10;
    first=a/(pow(10,digitsum));
    swapnumber=(last*pow(10,digitsum));
    swapnumber=swapnumber+a%(int)(pow(10,digitsum));
    swapnumber=swapnumber-last;
    swapnumber=swapnumber+first;
    if(last==first)
    {
       
        printf("Please enter a number which i can change last and first digits with them\n");
        
    }
    else{
    printf("swapped number: %d\n",swapnumber);
    printf("middle number(s):%d\n",(a%(int)(pow(10,digitsum)))/10 );
        while(a>0)
        {
            b=a%10;
            sumdigit+=b;
            a=a/10;
            
            
        }
        printf("sum of all digits:%d\n",sumdigit);
        for(;j>0;j--)
        {
            c=temp%10;
            printf("%d. digit:%d\n",i,c);
            temp=temp/10;
            i++;
            
        }
    
        
    }
    
    
    return 0;
    
}
