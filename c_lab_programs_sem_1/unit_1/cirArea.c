/*
A program to find  area of a circle.
<name>
<date>
cirArea.c
*/


#include <stdio.h>

void main(){
    float r,a;

    printf("Enter the radius of the circle to find its area\n:");
    scanf("%f",&r);

    a = 3.14*r*r;

    printf("The area of the circle is : %f",a);
}