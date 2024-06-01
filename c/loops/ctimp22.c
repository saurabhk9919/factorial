#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");       //wap program to print the the no of digits in a givem number 
    scanf("%d",&n);
    int sum=0;
    int ld=0;
    while(n>0)    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
   
    }
    printf("the no of digits are %d",sum);
    return 0;
}