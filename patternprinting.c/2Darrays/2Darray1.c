// #include<stdio.h>
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,9,5,}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a[i][j]);
//         }
//        printf("\n");
//     }
//     return 0;
// }
 #include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{1,2,3},{4,5,6}};
    for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
    printf("%d ",a[i][j]);
}
printf("\n");       //static initialisation of 2D array
    }
    return 0;
}
