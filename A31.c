//WAP to enter an element at specific position into array. (Do not take a new array)

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    int pos,ele;
    printf("Enter pos : ");
    scanf("%d",&pos);
    printf("Enter element : ");
    scanf("%d",&ele);

    for(int i=n;i>=pos;i--){
        a[i] = a[i-1];
    }

    a[pos-1] = ele;
    for(int i=0;i<n+1;i++){
        printf("%d",a[i]);
    }
    return 0;
}