#include <stdio.h>

int main(){
    int n, i,count=0;
    unsigned long long fact = 1;
    scanf("%d", &n);
    if (n < 0)
        printf("Error.");
    else {
        for (i = 1; i<= n;++i) {
            fact= fact*i; 
        }
        printf("Factorial of %d = %llu", n, fact);
        printf("\n");
    }
 while(fact%10 == 0) {
     
         count++;
      
      fact/=10;
 }
 printf("%d",count);
    return 0;
}