#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<=4;i++){
        printf("enter the element %d;",i+1);
        scanf("%d",a[i]); 
    }
              int sum=0;
            for(int i=0;i<=4;i++)
      
              sum=sum + a[i];
            printf("%d",sum);

            }
            
            return 0;
    }