#include<stdio.h>
int main(){
    int n,temp,j;
    int a[n];
    printf("enter the size of ther array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n-1;i++){
        j=i-1;
        while (j<=1 && a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
    j--;
    }
    }
    printf("the sorted element after inserstion sort");
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}