#include <stdio.h>
#include <math.h>

int main()
{
    int pn;
    for(int i=1; ;i++){
    pn=(i*(3*i-1))/2;
    if(pn<=100)
    {
    printf("%d\n",pn);
    }
    else
    break;

    }
    return 0;
}