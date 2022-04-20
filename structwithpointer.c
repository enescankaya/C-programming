#include <stdio.h>
#include <string.h>
struct infos
{
char name[20];
char surname[20];
int age;
};

int main()
{
    struct infos one;
    strcpy(one.name,"Enes");
    strcpy(one.surname,"Cankaya");
    one.age=21;
    struct infos *p;
    p=&one;
    printf("%s %s %d\n",one.name,one.surname,one.age);
    printf("%s %s %d\n",p->name,p->surname,p->age);/*pointerismi->structistenilen kullanilir structlarda printf pointer yazdirmak istenirse*/
    return 0;
}