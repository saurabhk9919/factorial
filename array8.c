#include<stdio.h>
int main(){
int a[7];
for(int i=0;i<=6;i++){
    printf("enter the  numbers:");
    scanf("%d",&a[i]);
}
int max = a[0];
for(int i=1;i<=6;i++){
    if(max>a[i]){
        max=a[i];
}}
printf("%d",max);
return 0;
}
