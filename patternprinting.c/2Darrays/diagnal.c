#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("enter the row;");
    scanf("%d",&r);
    printf("entr the number of colomn");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the matrix elemnt");
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){// of the diagnal matrix
    scanf("%d",&a[i][j]);
    }
}
   for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i==j)//yha pr j ki jagah r/c-1 kard.enge toh 
            //                              antidignal ka sum print ho jayega
                sum=sum+a[i][j];
            }       
   }
     printf("%d",sum); 
return 0;
   }