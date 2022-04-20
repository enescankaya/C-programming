#include <stdio.h>
#include <stdlib.h>
int main(void) {
int studentnumber;
int size=1;
int i;
int psize=0;
int *pointersn=(int *)malloc(1*sizeof(int));
printf("ogrenci numaranızı giriniz: ");
scanf("%d",&studentnumber);
while(studentnumber>0){ 
  size++;
  pointersn=realloc(pointersn,size*sizeof(int));
  *(pointersn+psize)=studentnumber%10;
  psize++;
  studentnumber=studentnumber/10;
}
for(i=psize-1;i>=0;i--){
  printf("%d",*(pointersn+i));
}
}