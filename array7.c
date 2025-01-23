
#include<stdio.h>
int main(){
int a[4];
for(int i=0;i<=3;i++){
    printf("enter the element %d:",i+1);
    scanf("%d",&a[i]);
}
int product=1;
for(int i=0;i<=3;i++){//product of the given elements of the array by the user
    product=product*a[i];
}
printf("%d",product);
return 0;

}