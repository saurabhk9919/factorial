#include<stdio.h>
int main(){
int n;

printf("enter the nth number:");
scanf("%d",&n);
int a=1;
int b=1;
int c=1;
for(int i=1;i<=n-2;i++){
    c=a+b;
    a=b;
    b=c;
}
printf("%d",c);
return 0;
}