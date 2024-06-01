#include<stdio.h>
int main(){
    int n,i,j,temp;
    int a[n];
    printf("enter the array size");
    scanf("%d",&n);
    printf("\n");
  //  printf("enter the array elemnts");
    for(i=0;i<n;i++){
      // printf("enter the number%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
        }
    }
        } 
        printf("\n");
        printf("The sorted elemnts after applying bubble sort :");   
        printf("\n");  
      for(i=0;i<n;i++){
        printf("%d ",a[i]);
      }
    return 0;
}