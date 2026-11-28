//WAP to find whether a number is Odd or Even without using a % operator. 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);
//     if(n & 1){
//         printf("Number is Odd");
//     }else{
//         printf("Number is Even");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    if((n / 2) * 2 == n){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }

    return 0;
}