#include <stdio.h>
#include <string.h>

struct grades
{
int nam1;
int nam2;
int nam3;

};


struct datas
{
    char name1[20];
    char name2[20];
    char name3[20];
    int age1;
    int age2;
    int age3;
    struct grades name;


};

int main()
{
    struct datas p1;

strcpy(p1.name1,"Fatma");
strcpy(p1.name2,"Enes");
strcpy(p1.name3,"Gorkem");
p1.age1=20;
p1.age2=21;
p1.age3=21;
p1.name.nam1=50;
p1.name.nam2=52;
p1.name.nam3=56;
printf("%s\n%s\n%s\n %d\n %d\n %d\n %d\n %d\n %d\n",p1.name1,p1.name2,p1.name3,p1.name.nam1,p1.name.nam2,p1.name.nam3,p1.age1,p1.age2,p1.age3);
    return 0;
}