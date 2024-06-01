// #include<stdio.h>
// int main(){
//     int n;
//     printf("enetr the number");
//     scanf("%d ",&n);                        //1,3 ,5,7.....n
//     for(int i=1;i<=2*n-1;i=i+2){            //conditon-->An=a+ (n-1)d
//         printf("%d\n ",i);                  //increment k lie difference dekh lo 
//     }
//     return 0;
// }

//similarly for 4,7,10,13....n

#include<stdio.h>
int main(){
    int n;
    printf("enetr the number");
    scanf("%d ",&n);                      
    for(int i=4;i<=3*n+1;i=i+3){            //conditon-->An=a+ (n-1)d
        printf("%d",i);                  //increment k lie difference dekh lo 
    }
    return 0;
}




