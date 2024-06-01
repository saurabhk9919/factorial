#include<stdio.h>
int main(){
int a[7]={1,2,3,4,5,6,7};
int esum=0;
int osum=0;                 //difference b/w the sum of add and and even indices
int result;
for (int i=0; i<=6;i++){
    if(a[i]%2==0){
        esum=esum+a[i];
    }
    else{
        osum=osum+a[i];
    }
}
result=osum-esum;
printf("%d ",result);
 return 0;
}