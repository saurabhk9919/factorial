#include.<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number");
    scanf("%d",a);
    printf("enter the sec number");
    scanf("%d",b);
    printf("enter the 3rd number");
    scanf("%d",c);
    if(a>b){//b is out of race
    if(a>c)
    printf("a is the greatest");
    else 
    printf("c is the greatest");
    }
    else{
        if(b>c)
        printf("b is the greatesty");
        else printf("c is the greates");
    }
    return 0;
}
