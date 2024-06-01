#include<stdio.h>
int main(){
    int a[7]={2,5,4,4,65,47,45};
    int max=a[0];
    int smax=a[0];
    for(int i=0;i<=6;i++){
        if(max<a[i]){//wap prorm to print sec largest number
            max=a[i];
        }
    }
    for(int i=0;i<=6;i++){
        if(a[i]!=max && smax<a[i]){
            smax=a[i];
        }
    }
          printf("%d",smax);
    return 0;
    }
