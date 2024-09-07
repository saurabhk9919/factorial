#include<stdio.h>
int main(){
    int a[7];
    for(int i=0;i<=6;i++){
        printf("entr the numbers:");
        scanf("%d",&a[i]);
    }
 for(int i=0;i<=6;i++)
     {
         if(i==0||i==2||i==4||i==6)
             a[i]=a[i]*10;
         else
             a[i]=a[i]+10;
     }
        for (int i=0;i<=6;i++){
            printf("%d ",a[i]);
        
        }
 return 0;   
}
