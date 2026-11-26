//WAP to sort an Array using Bubble sort. 

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    int last = n - 1;
    for(int i=0;i<n-1;i++){
        int exchs = 0;
        for(int j=0;j<=last-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                exchs = exchs + 1;
            }
            
        }
        if(exchs == 0){
                break;
            }else{
                last = last -1;
            }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}