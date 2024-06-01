#include<stdio.h>
int main(){
    int r;
    printf("enter the row:");
     scanf("%d",&r);
     int c;
    printf("enter the column");
    scanf("%d",&c);
int a[r][c];
for(int i=0;i<r;i++){
    for (int  j = 0; j <c; j++){//for lement entry
        scanf("%d",&a[i][j]);
}
}

for(int i=0;i<r;i++){
    for (int j = 0; j< c; j++)
    {
        printf("%d ",a[i][j]);      //for element printing
    }
    printf("\n");
}
return 0;
}