//WAP to find a sum of even number into 1D array. 

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0){
            sum = sum + a[i];
        }
    }
    printf("sum : %d",sum);
    return 0;
}