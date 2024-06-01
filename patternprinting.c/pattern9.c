#include<stdio.h>
int main(){
    int n;
printf("entr the number?__");
scanf("%d",&n);
for(int i=1;i<=n;i++){              //for spaces
    for(int j=1;j<=n-i;j++){
    printf(" ");
}
for (int k=1;k<=i;k++){     //can also use "j" isted of k
    printf("*");                //for star printing
}
printf("\n");
}
return 0;
}