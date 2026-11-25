/*WAP to find a quotient and reminder of 2 number (bigger number should be divided by lower 
number) and you are not allowed to use a division and quotient operator. */

#include<stdio.h>
int main(){
    int a,b,q=0,r,sum=0;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    if(a<b){
        int temp = a;
        a = b;
        b = temp;
    }

    while(sum+b<=a){
        sum = sum + b;
        q++;
    }

    r = a - sum;

    printf("Quotient = %d\n",q);
    printf("Remainder = %d",r);
    return 0;
}