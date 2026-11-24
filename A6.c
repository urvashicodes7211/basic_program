//WAP to find weather given number is Armstrong number is not.

#include<stdio.h>
int main(){
    int n,c = 0,sum = 0,m;
    printf("Enter n : ");
    scanf("%d",&n);
    int ori = n;
    while(n>0){
        n = n / 10;
        c++;
    }
    n = ori;
    while(n>0){
        m = n % 10;
        n = n / 10;
        int mul = 1;
        for(int i=1;i<=c;i++){
            mul = mul * m;
        }
        sum = sum + mul;
    }
    if(sum == ori){
        printf("Armstrong number");
    }else{
        printf("Not Armstrong number");
    }
    return 0;
}