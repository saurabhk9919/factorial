#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");           //wap  to print the reverse of the given number 
    scanf("%d",&n);
int r=0;
while (n>0)
{
    r=r*10;
    r=r+n%10;
    n=n/10;
}
printf("the reverse of %d is %d",n,r );
    return 0;
}