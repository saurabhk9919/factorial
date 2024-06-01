#include<stdio.h>
int main(){
    int n;
    printf("entr the number:"); 
    scanf("%d",&n);             
    int sum=0;
            {          //for example 1-2+3-4+5-6.....n
            if(n%2==0)
            sum=-n/2;
         else 
         sum= (-n/2+n);
                           //if the given number is upto even then we use thwe formula---> -n/2
                                    //if the given number is upto odd then we use thwe formula---> -n/2+n
                                //for loop yhi program ct2imp6 wale folder mein hai
        
    }
printf("the sum of the numberf is %d",sum);
return 0;
}