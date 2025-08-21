/*
A program to find area of a triangle using length of its three sides.
<name>
<date>
triAreaSides.c
*/

#include <stdio.h>
#include <math.h>

void main(){    
    float area,s,a,b,c;

    printf("Enter the lenght of three sides of triangle:\n");
    scanf("%f %f %f",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangles is : %.2f",area);
}