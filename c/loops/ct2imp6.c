#include<stdio.h>
int main(){
    int n;
    printf("entr the number:"); 
    scanf("%d",&n);             
    int sum=0;
    for(int i=1;i<=n;i++){          //for example 1-2+3-4+5-6.....n
        if(n%2!=0)
        sum=sum+i;
        else
        sum=sum-i;

    }
printf("the sum of the numberf is %d",sum);
return 0;
}