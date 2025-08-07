/*
A program to find surface area of a cylinder.
<name>
<date>
csa.c
*/


#include <stdio.h>

void main(){
    float r,h,a;
    printf("Enter the height and radius of the cylinder\n:");
    scanf("%f %f",&h,&r);
    a = 2*3.14*r*(r+h);
    printf("The surface area of the cylinder is : %f",a);
}