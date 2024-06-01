#include<stdio.h>
int main(){
    int a[5]={3,10,16,33,56};
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    for(int i=0;i<=4;i++){    //koi given se greater jitni bhi valueshai array mei unko prin
        if(a[i]>x){
            printf("%d ",a[i]);
        }
    }
    return 0;
}