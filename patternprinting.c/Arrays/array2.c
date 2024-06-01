#include<stdio.h>
int main(){
    int a[10];
for(int i=0;i<10;i++){

    printf("ENTER THE MARKs of student%d:",i+1);
    scanf("%d",&a[i]);
}
for(int i=0;i<10;i++){
    if(a[i]<35){

    printf("%d ",i);
}                           //marks ka index print kar rhe agar exact marks 
                            //print karna hai toh a[i] likh do

}
return 0;
}