#include <stdio.h>
int asal(int number)
{
    
    
    int control=0;
 
    for(int j = 2;j<number;j++)
    {

        if(number%j==0)
        {
            control=1;
        }

    }
    if(control==0)
    {
        printf("%d is a prime number \n",number);

    } 
    else
    {
        printf("%d is not a prime number \n ",number);


    }
    return number;

    
}
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
  
    
    asal(number);
    


}
