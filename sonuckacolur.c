#include <stdio.h>
int fun(int n) {
if(n == 4) 
return n;
else return 2*fun(n+1); }
int main() {
   printf("%d \n ", fun(2));
return 0; }