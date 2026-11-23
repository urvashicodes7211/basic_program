//WAP to find a factorial of a given integer (iterative)

#include<stdio.h>
int main(){
    int n,fac=1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fac = fac * i;
    }
    printf("%d",fac);
    return 0;
}