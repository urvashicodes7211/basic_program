/*WAP to calculate an angle between hour and minute hand. (Hours and minutes should be 
taken from user) */

#include<stdio.h>
int main(){
    int h,m;
    float ha,ma,angle;

    printf("Enter hours and minutes : ");
    scanf("%d %d",&h,&m);

    ha = (h * 30) + (m * 0.5);
    ma = m * 6;

    angle = ha - ma;

    if(angle < 0){
        angle = -angle;
    }

    if(angle > 180){
        angle = 360 - angle;
    }

    printf("Hour Angle = %.2f\n",ha);
    printf("Minute Angle = %.2f\n",ma);
    printf("Angle = %.2f",angle);

    return 0;
}