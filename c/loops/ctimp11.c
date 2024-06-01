#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
 if(n%i==0){
    a=1;
    break;
 }
    }
    if(n==1)printf("1 is neihther prime nor composite");
    else if(a==1)printf("%d is not prime",n );
    else{
     printf("the number is prime");
}
return 0;
}