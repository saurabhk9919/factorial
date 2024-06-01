#include<stdio.h>
int main(){
    int n;
    printf("entr the number:");  //sample --->1+2+3+4.....n
    scanf("%d",&n);             // moj masti
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
printf("the sum of the numberf is %d",sum);
return 0;
}