#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
     if ((year%4==0)&&(year%100!=100||year%400==0)){
        printf("the year is leap");
      }
     else
     {
        printf("not a leap year");
     }
return 0;
 }
