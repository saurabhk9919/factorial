#include<stdio.h>
int main(){
    int a[7]={3,6,3,8,5,4,9,};
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            a[i]=a[i]*10;
        }
        else{
            a[i]=a[i]+10;  //array k odd elementys mei 2 se multiply aor array k 
                            //array k even k elements 10 add krke print kara d 
    }
    }
    for(int i=0;i<=6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}