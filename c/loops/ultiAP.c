#include<stdio.h>
int main(){
    int n;
    printf("enetr the number:");
    scanf("%d",&n);
  int a=100;
  for(int i=1;i<=n;i++){  //we can use in place of i<=1 as "a>0 means positive value of a hi print hogi33
    printf("%d ",a);    //nhi toh positive prit krme k liye An=a+(n-1)d use karke n value nikalte
    a=a-3;


  }
return 0;
}