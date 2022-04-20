#include <stdio.h>

struct infos{
char name[20];
char surname[20];
int age;
};
void print(struct infos print)
{
    printf("Name:%s\nSurname:%s\nAge:%d\n",print.name,print.surname,print.age);
}
struct infos getinfo()
{
    struct infos get;
    printf("enter name,surname and age:");
    scanf("%s %s %d",get.name,get.surname,&get.age);
    return get;
}
int main()
{
    struct infos give = getinfo();
    print(give);
    return 0;
}