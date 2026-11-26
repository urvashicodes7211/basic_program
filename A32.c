/*WAP to delete an element from array specified by user. if element is not found print a message 
“Element is not found” (do not take a new array). */


#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }

    int ele,found=0;
    printf("Enter element : ");
    scanf("%d",&ele);

    for(int i=0;i<n;i++){
        if(a[i] == ele){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            found=1;
            n--;
            break;
        }
    }

    if(found == 0){
        printf("Element is not found");
    }
    else{
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }

    return 0;
}
