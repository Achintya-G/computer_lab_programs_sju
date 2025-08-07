/*
A program to approximate the value of cos function.
<name>
<date>
apprxcos.c
*/

#include <stdio.h>

void main(){
    float angle,x,t1,t2,t3,t4,t5,cos;

    printf("Enter the angle in degress to find cos(x):\n");
    scanf("%f",&angle);

    x = 3.14*angle/180;
    t1 = 1;
    t2 = t1*(x*x/(2));
    t3 = t2*(x*x/(4*3));
    t4 = t3*(x*x/(6*5));
    t5 = t4*(x*x/(8*7));

    cos = t1-t2+t3-t4+t5;

    printf("\nThe value of cos(x) is : %f",cos);
}