#include<stdio.h>
int main()
{
int x,y;
printf("enter the cordinate:");
scanf("%d %d",&x,&y);
if(x==0 && y==0){
 printf("point is the origin");
}
else if (x==0){
    printf("the coRdinate is on the  y axis");
}
else if(y==0){
    printf("the cordinatar is on the x axis");
}
else{
 printf("the pont is somre whetr in the quad");
}
return 0;
}