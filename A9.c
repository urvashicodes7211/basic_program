//WAP to find a power a^b (without using power and multiplication operation) 

#include<stdio.h>
int main(){
    int a,b,power = 1;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);

    for(int i=1;i<=b;i++){
        int temp = 0;
        for(int j=1;j<=a;j++){
            temp = temp + power;
        }
        power = temp;
    }

    printf("Power = %d",power);
    return 0;
}