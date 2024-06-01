#include<stdio.h>
int main(){
    int r,c;
    printf("entr the no. of rows");
    scanf("%d",&r);
    printf("entr the no. of column:");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
        scanf("%d",a[i][j]);
    }
    }
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
        printf("%d",a[i][j]);
     }
     printf("\n");
}
int sum=0;
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
sum =sum+a[i][j];
printf("%d",sum);
     }
     }
     return 0;
    }