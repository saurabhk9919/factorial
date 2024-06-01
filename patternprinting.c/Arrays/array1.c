// #include<stdio.h>
// int main(){
//  int a[5]={2,4,8,6,1};
//  for(int i=0;i<=4;i++)
//  printf("%d ",a[i]);
//  return 0;

// }


#include<stdio.h>
int main(){
    int a[5];
for(int i=0;i<=4;i++){
printf("enter the number%d :",i+1);
scanf("%d",&a[i]);

}
printf("%d",a[1]);
return 0;
}