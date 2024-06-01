#include<stdio.h>
int main(){
int a[10];
for(int i=0;i<=10;i++){
    printf("enter the marks:");
    scanf("%d",&a[i]);
    if(a[i]<30){
        printf("%d",a[i]);
    }
}
return 0;
}