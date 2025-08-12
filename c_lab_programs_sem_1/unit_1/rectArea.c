/*
A program to find area of a rectangle.
<name>
<date>
rectArea.c
*/


#include <stdio.h>

void main(){
    float b,l,a;
    
    printf("Enter the lenght and breadth of rectangle to find its area:\n");
    scanf("%f %f",&l,&b);

    a = l*b;

    printf("The area of the rectangle is : %f",a);
}