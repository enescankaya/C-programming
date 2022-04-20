#include <stdio.h>

struct infos
{
    char name[20];
    char surname[20];
    int number;
    int grade1;
    int grade2;
    float average;

};
int main()
{
    
    struct infos get[3];
    for(int i=0;i<3;i++)
    {
        printf("enter %d. student's name:",i+1);
        scanf("%s",get[i].name);
        printf("enter %d. student's surname:",i+1);
        scanf("%s",get[i].surname);
        printf("enter %d. student's number:",i+1);
        scanf("%d",&get[i].number);
        printf("enter %d. student's first grade:",i+1);
        scanf("%d",&get[i].grade1);
        printf("enter %d. student's second grade:",i+1);
        scanf("%d",&get[i].grade2);
        get[i].average=(get[i].grade1+get[i].grade2)/2;
    }
    for(int j=0;j<3;j++)
    {
        printf("%d. student's name: %s\n",j+1,get[j].name);
        printf("%d. student's surname: %s\n",j+1,get[j].surname);
        printf("%d. student's number: %d\n",j+1,get[j].number);
        printf("%d. student's first grade: %d\n",j+1,get[j].grade1);
        printf("%d. student's second grade: %d\n",j+1,get[j].grade2);
        printf("%d. student's average: %3.f\n",j+1,get[j].average);
        printf("***********************%d****************************\n",j+1);
    }

    
    
    
    return 0;
}