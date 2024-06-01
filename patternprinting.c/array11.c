#include<stdio.h>
int main(){
    int a[7]={2,7,17,12,9,34,4};
    int x;                  //prgrm to find no of ele,ments in the array graeter 
                            //than agiven number 
    int count=0;
    printf("entr the value of x:");
    scanf("%d",&x);
    for (int i=0;i<=6;i++){
         if(a[i]>x){
            count++;
        }
    }
      printf("%d",count);
    return 0;
}