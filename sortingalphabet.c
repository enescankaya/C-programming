#include <stdio.h>
void alphabe(char a[])
{
    char first;
    int j;
    for(int i = 0;a[i]!='\0';i++)
    {
        if('a[i]'>='a'){
        continue;}
        first=a[i];

        j=i;
         while('a[j]'>'first')
        {
            a[j]=first;
            first=a[j];
            j--;
        }



    }
    printf("%s\n",a);


}
int main()
{

    char a[100];
    printf("enter words:");
    gets(a);
    alphabe(a);
    return 0;
}