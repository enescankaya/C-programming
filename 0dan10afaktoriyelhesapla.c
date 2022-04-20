#include <stdio.h> 
long fact(long n){
if (n <= 1)
return 1;
else
return (n*fact(n - 1));

}
int main(void){
    int i;
for (i = 0; i <= 10; i++) {
printf("%d! = %ld\n", i, fact(i));
}
return 0; 
}
