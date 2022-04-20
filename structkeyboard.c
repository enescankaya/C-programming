#include <stdio.h>
#include <string.h>
struct infos
{
    char name[20];
    char surname[20];
    int age;
    int grade1;
    int grade2;
};
int main()
{
    struct infos enes;
    printf("enter your name,surname,age,first grade and second grade recpectively.");
    scanf("%s %s %d %d %d",enes.name,enes.surname,&enes.age,&enes.grade1,&enes.grade2);
    printf("*****Hello %s %s*****\nYour age: %d\nYour first grade:%d\nYour second grade:%d\nYour average:%d\n",enes.name,enes.surname,enes.age,enes.grade1,enes.grade2,(enes.grade2+enes.grade1)/2);
    return 0;
}