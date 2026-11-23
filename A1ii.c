//WAP to find a factorial of a given integer (recursive)

#include<stdio.h>
int Fac(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * Fac(n - 1);
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Factorial : %d",Fac(n));
    return 0;
}