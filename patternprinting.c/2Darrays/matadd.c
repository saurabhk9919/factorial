#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter the rows:");
    scanf("%d",&r);
    printf("enter the column:");
    scanf("%d",&c);
    int a[r][c];
    printf("Entre the elements of the first matrix\n");
    for (i = 0; i < r; i++){
        for ( j = 0; i < c; j++){
            //printf("enter the element of a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("entr the elemnts of the second matrix\n=");
    int b[r][c];
    for (i = 0; i<r; i++){
        for (j = 0; j < c; j++){
//printf("enter the element of b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    int res[r][c];
      for (i = 0; i<r; i++){
        for (j = 0; j < c; j++){
    res[i][j]=a[i][j]+b[i][j];
}
}
printf("sum of two matrices is:\n");
  for (i = 0; i<r; i++){
        for (j = 0; j < c; j++){        //for printing final matrix
            printf("%d",&res[i][j]);
        }
        printf("\n");
        }
        return 0;
}