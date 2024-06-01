#include<stdio.h>
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int pairs=0;
    for(int i=0;i<=7;i++){
        for(int j=a[i]+1;j<=7;j++){
            if(a[i]+a[j]==12){
            pairs=pairs+1;
            printf("(%d,%d)\n",a[i],a[j]);
    }
        }                   //kisi given integer ka pairs ka sum print karana hai
                        //aor kitne pairs ye bhi print karasna hai- 
    }
    printf("%d",pairs);
    return 0;
}