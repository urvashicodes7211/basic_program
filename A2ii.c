//WAP to find a summation of a digit of a given number. (recursive)

#include<stdio.h>
int Sum(int n){
    if(n == 0){
        return 0;
    }else{
        return (n % 10) + Sum(n / 10);
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("sum = %d",Sum(n));
    return 0;
}