#include<stdio.h>
int main(){
    int r,c;
    printf("entr the rows:");
    scanf("%d",&r);
     printf("entr the column:");
    scanf("%d",&c);
    int a[r][c];
     printf("enter the matrix elements:-");
  for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){ 
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){ 
            printf("%d ",a[j][i]);
        }
        printf("\n");
}
return 0;
}