//WAP to find a summation of a digit of a given number. (Iterative)

#include<stdio.h>
int main(){
    int n,m,sum = 0;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>0){
        m = n % 10;
        n = n / 10;
        sum = sum + m;
    }
    printf("sum = %d",sum);
    return 0;
}