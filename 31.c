    #include <stdio.h>

int main()

{
    int i,j,a[20],n=0,l=19,b;

    for(i=0;i<20;i++)
    {
        printf("deger giriniz: ");
        scanf("%d",&b);
        if(b%3==0)
        {
            a[n]=b;
            n++;
        }
        else
        {
            a[l]=b;
            l--;
        }


    }
    for(j=0;j<20;j++)

{
    printf("%d ",a[j]);
}    
printf("\n");
    
    return 0;
}