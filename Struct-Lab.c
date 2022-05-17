#include <stdio.h>
#include <stdlib.h>
struct student {
    int number;
    char name[20];
    int midterm;
    int final;
    struct student *next;
};

typedef struct student std;
std *head=NULL;
std *p=NULL;
void add(void);
void update(void);
void list(void);
void average(void);
void best(void);
void delete(void);
int main()
{
    int n;
    int a;
     printf("how many student do you want to record?");
        scanf("%d",&n);
        for(int i = 0; i <n;i++)
        {
            if(i==0)
            {
                    head=(std *)malloc(sizeof(std));
                    p=head;
            }
            else
            {
                p->next=(std *)malloc(sizeof(std));
                p=p->next;
            }
        printf("\n**************************\n");
        printf("enter %d. number:",i+1); scanf("%d",&p->number);
        printf("enter %d. name:",i+1); scanf("%s",p->name);
        printf("enter %d. midterm grade:",i+1); scanf("%d",&p->midterm);
        printf("enter %d. final grade:",i+1); scanf("%d",&p->final);
        printf("\n**************************\n");
        }
        p->next=NULL;
    rpt:
    printf("\n**************************\n");
    printf("1-)Add New Record\n2-)List Record\n3-)Update Record\n4-)Calculate Class Average\n5-)Show Best Student Record According to Average\n6-)Delete a record\n7-)quit\n");
    printf("Select option you want to do: ");
    scanf("%d",&a);
    printf("\n**************************\n");
    switch(a)
    {
        case 1:
        add();
        goto rpt;
        break;
        case 2:
        list();
        goto rpt;
        break;
        case 3:
        update();
        goto rpt;
        break;
        case 4:
        average();
        goto rpt;
        break;
        case 5:
        best();
        goto rpt;
        break;
        case 6:
        delete();
        goto rpt;
        break;
        case 7:
        break;
        default:
        printf("enter a valid number!!!\n");
        goto rpt;
        break;  
    }
    free(p);
    free(head);
return 0;
}
void add(void)
{
    p=NULL;
    p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    std *new=(std *)malloc(sizeof(std));
    p->next=new;
    new->next=NULL;
        printf("\n**************************\n");
        printf("enter new number:"); scanf("%d",&new->number);
        printf("enter new name:"); scanf("%s",new->name);
        printf("enter new midterm grade:"); scanf("%d",&new->midterm);
        printf("enter new final grade:"); scanf("%d",&new->final);
        printf("\n**************************\n");
}
void update(void)
{
    p=NULL;
    p=head;
    printf("enter the number of student who you want to update: ");
    int e;
    scanf("%d",&e);
    while (p!=NULL)
    {
        if(p->number==e)
        {
        printf("\n**************************\n");
        printf("enter new number:"); scanf("%d",&p->number);
        printf("enter new name:"); scanf("%s",p->name);
        printf("enter new midterm grade:"); scanf("%d",&p->midterm);
        printf("enter new final grade:"); scanf("%d",&p->final);
        printf("\n**************************\n");
        goto out;
        }
        out:
        p=p->next;
    }
    }
void list(void)
{
    p=NULL;
    p=head;   
    while (p!=NULL)
    {
        printf("\n**************************\n");
        printf("Name: %s \n",p->name);
        printf("Number: %d \n",p->number);
        printf("Midterm: %d \n",p->midterm);
        printf("Final: %d \n",p->final);
        printf("\n**************************\n");

        p=p->next;
    }
}
void average(void)
{
p=NULL;
p=head;
int sum=0,counter=0;
float avg;
while(p!=NULL)
{
sum+=((p->midterm*40)/100)+((p->final*60)/100);
counter++;
p=p->next;
}
avg=sum/counter;
printf("average of the class: %f\n",avg);
}
void best(void)
{
    int max=0;
    p=NULL;
    p=head;
    std *q;
    q=(std *)malloc(sizeof(std));
    while(p)
    {
        if((((p->final*60)/100)+((p->midterm*40)/100))>max)
        q=p;
        p=p->next;
    }
    printf("***** best student informations *****\n");
    printf("Name: %s \n",q->name);
        printf("Number: %d \n",q->number);
        printf("Midterm: %d \n",q->midterm);
        printf("Final: %d \n",q->final);
        float avg=((q->final*60)/100)+((q->midterm*40)/100);
        printf("\n**************************\n");
        printf("average: %f \n",avg);
}
void delete(void)
{
    std *q=(std *)malloc(sizeof(std));
    q=head;
    p=head;
    printf("enter number of student who you want to delete: ");
    int n;
    scanf("%d",&n);
        if(p->number==n)
        {
            head=p->next;
            free(p);
        }
    else
    {
        while(p->next!=NULL)
        {
            if(p->number==n) break;
            else{
            q=p;
            p=p->next;
        }}
        if(p->number==n){
        q->next=p->next;
        p=NULL;}
        else if(p->next==NULL)
        printf("no found student.\n");
    }
}