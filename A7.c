/*WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value should 
be taken from user (Note that you are not allowed to use an array for this)*/

#include<stdio.h>
int main(){
    int n,num,max,min;
    float sum = 0,avg;

    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("Enter number : ");
        scanf("%d",&num);

        if(i==1){
            max = num;
            min = num;
        }

        if(num > max){
            max = num;
        }

        if(num < min){
            min = num;
        }

        sum = sum + num;
    }

    avg = sum / n;

    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
    printf("Average = %.2f",avg);

    return 0;
}