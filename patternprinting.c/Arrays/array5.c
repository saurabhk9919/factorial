#include<stdio.h>
int main(){
    int ar[5]={2,6,4,5,7};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum= sum + ar[i];
    }
        printf("%d",sum);       
            return 0;
}