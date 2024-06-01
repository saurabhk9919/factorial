#include<stdio.h>
int main()
{
int unit;
printf("enter the units");
scanf("%d",&unit);
int bill=0;
if(unit<=200)
{
    printf("no bill have to pay");
}
else
{
    bill= (unit-200)*5;
}
printf("the bill is %d",bill);

return 0;
}