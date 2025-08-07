/*
A program to find perimeter of a rectangle.
<name>
<date>
rectper.c
*/

#include <stdio.h>

void main(){
    int l,b,p;
    printf("Enter the lenght and breadth of rectangle:\n");
    scanf("%d %d",&l,&b);
    p = 2*(l+b);
    printf("\nThe perimeter of the rectangle is : %d",p);
}