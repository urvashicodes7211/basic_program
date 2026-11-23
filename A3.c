//WAP to find a total odd and total even digit of a given number. 

#include<stdio.h>
int main(){
    int n,m,ec = 0,oc = 0;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n == 0){
        ec = 1;
    }
    while(n>0){
        m = n % 10;
        n = n / 10;
        if(m % 2 == 0){
            ec++;
        }else{
            oc++;
        }
    }
    printf("even : %d , Odd : %d",ec,oc);
    return 0;
}