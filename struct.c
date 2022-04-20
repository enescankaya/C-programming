#include <stdio.h>

struct student
{
    char name[20];
    char surname [20];
    int number;
    int firstgrade;
    int secondgrade;
};
int main()
{
    struct student enes = {"Enes","Cankaya",2010213061,60,45};
     printf("%s %s %d %d %d\n",enes.name,enes.surname,enes.number,enes.firstgrade,enes.secondgrade);
     return 0;
}

  