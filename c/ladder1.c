#include<stdio.h>
int main()
{
    int p,c,m;
    float per;
    printf("enter the marks of phys");
    scanf("%d",&p);
      printf("enter the marks of chem");
    scanf("%d",&c);
      printf("enter the marks of maths");
    scanf("%d",&m);
    per=(p+c+m)/3;
    if(per>80){
        printf("c");
    }
    else if(per>70){
        printf("B");
    }
    else {
        printf("A");

}
return 0;
}
