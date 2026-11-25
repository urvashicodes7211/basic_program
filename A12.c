/*WAP to find weather given number is Kaprekar or not. 
A Kaprekar number is a non-negative integer that, when squared, can be split into two parts 
whose sum equals the original number.  
For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 + 
25 = 45. */


#include<stdio.h>
int main(){
    int n,sq,temp,c=0,p=1,left,right;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    sq = n * n;
    temp = n;
    
    while(temp>0){
        c++;
        temp = temp / 10;
    }
    
    for(int i=0;i<c;i++){
        p = p * 10;
    }
    
    left = sq / p;
    right = sq % p;
    
    if(left + right == n){
        printf("Kaprekar Number");
    }
    else{
        printf("Not Kaprekar Number");
    }
    
    return 0;
}
