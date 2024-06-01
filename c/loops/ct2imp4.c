#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");           //factorial wala program]
    scanf("%d",&n);
int fact = 1;                              
 for(int i=1;i<=n;i++){
    fact = fact*i;
 }
 printf("the factorial 0f is %d",fact);
 
    return 0;
}