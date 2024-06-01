// #include<stdio.h>
// int main(){
// int n;
// printf("ENTR THE NUMBER:");
// scanf("%d",&n);
// for(int i=1;i<=n;i++)
// printf("*\n");
// return 0;
// }


#include<stdio.h>
int main(){
int n;
printf("ENTR THE NUMBER:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int i=1;i<=n;i++){
    printf("*");
    }
    printf("*\n");
}
return 0;
}
