#include <stdio.h>
long fibonacci(long n){
if (n == 0 || n == 1)
return n;
else
return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(void){
long i, n;
printf("How many fibonacci numbers?:"); 
scanf("%ld", &n);
for (i = 1; i <= n ; i++){
printf("Number %ld: %ld\n", i, fibonacci(i)); 
}
return 0;
 }