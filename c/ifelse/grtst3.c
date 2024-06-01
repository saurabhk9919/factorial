#include<stdio.h>
int main()
{
int a,b,c;
printf("entr the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c){
    printf("a is the greatest numb");
}
if(b>c && b>a){
printf("b is the greaaates");
}
if(c>a && c>b){
    printf("c is the greaetest number");
}
return 0;
}