/*WAP to find weather given number is Automorphic or not. 
An automorphic number is a number whose square ends with the same digits as the number 
itself.  
For example, 5 is automorphic because 5² = 25, which ends in 5.  
Similarly, 76 is automorphic because 76² = 5776, which ends in 76. */

#include<stdio.h>
int main(){
    int n, sq, temp;
    printf("Enter n : ");
    scanf("%d",&n);

    sq = n * n;
    temp = n;

    int count = 1;
    while(temp > 0){
        temp = temp / 10;
        count = count * 10;
    }

    if(sq % count == n){
        printf("Automorphic number");
    }else{
        printf("Not automorphic number");
    }

    return 0;
}