#include <stdio.h>
#include <string.h>
struct infos
{
char name[15];
char surname[20];
int age;
};

void funk(struct infos *come)
{
    strcpy(come->name,"Ahmet");
    strcpy(come->surname,"kapak");
    come->age=40;

}
void show(struct infos *come)
{
    printf("%s %s %d %lu\n",come->name,come->surname,come->age,sizeof(come->name));

}

int main()
{
    struct infos one={"Enes","Cankaya",21};
    show(&one);
    funk(&one);
    printf("%s %s %d\n",one.name,one.surname,one.age);
    return 0;
    }