#include<stdio.h>
int main(){
    int n,temp;
    int a[n];
    printf("enter the size unsorted array:");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&a[i]);
         }
         for(int i=0;i<n-1;i++){
            int minindx=i;
            for(int j=i+1;j<n;j++){
                if(a[minindx]>a[j]){
                    minindx=j;
                    
                }
            }
         if(minindx!=i){

            temp=a[i];
            a[i]=a[minindx];
            a[minindx]=temp;
         }
         }
         printf("the sorted arrayy is \n");
         for(int i=0;i<n;i++){
            printf("%d ",a[i]);

         }
          return 0;
         }
   
