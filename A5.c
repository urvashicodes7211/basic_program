//WAP to find a prime number between range (range should be entered by user).

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int c = 0;
        for(int j=1;j<=i;j++){
            if(i % j == 0){
                c++;
            }
        }
        if(c == 2){
            printf("%d\n",i);
        }
    }
    return 0;
}