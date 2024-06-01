#include<stdio.h>
int main(){
    int n;
printf("entr the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n+1-i;j++){
    printf("%c",'A'-1+i);

}
printf("\n");
}
return 0;
}