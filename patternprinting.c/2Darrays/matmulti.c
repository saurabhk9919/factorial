#include<stdio.h>
int main(){
    int r,c,m,q;
    printf("enter the number of rowws of first matri");
    scanf("%d",&r);
        printf("enter the number of columns of first matri");
    scanf("%d",&c);
int a[r][c];
printf("enter the elements of the first matrix\n");
printf("\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
    printf("enter the number of rowws of second matri");
    scanf("%d",&m);
        printf("enter the columns second matri");
    scanf("%d",&q);
    int b[m][q];
    printf("enter the second matrix");
    printf("\n");
    for(int i=0;i<m;i++){
for(int j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
}
if(c!=m){
    printf("matrix cannot be multiplied");
}
else{
    int res[r][q];
    for(int i=0;i<r;i++){
for(int j=0;j<q;j++){
    res[r][q]=0;
    for(int k=0;k<c;k++){
        res[i][j]+=a[i][k]*b[k][j];
    }

    }
}
   for(int i=0;i<r;i++){
for(int j=0;j<q;j++){
    printf("%d",res[i][j]);
}
printf("\n");
}
}
return 0;
}