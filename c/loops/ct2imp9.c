#include<stdio.h>
int main(){
int n;

printf("enter the nth number:");
scanf("%d",&n);
int a=0;
int b=1;
int c;
printf("%d%d",a,b);
for(int i=2;i<=n;i++){
    printf("%d",c);
    
    c=a+b;
    a=b;
    b=c;

}           //nhi cgala abhi
return 0;
}