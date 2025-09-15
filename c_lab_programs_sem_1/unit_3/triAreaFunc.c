/*
A program to find area of triangle given 3 sides using function subprogram.
<name>
<date>
triAreaFunc.c
*/

#include <stdio.h>
#include <math.h>

int triArea(int a,int b,int c);

void main()
{
    int a,b,c,area;

    printf("Enter lenght of 3 sides of triangle to find its area:");
    scanf("%d %d %d",&a,&b,&c);

    area = triArea(a,b,c);

    printf("The area of the triangle is : %d",area);
}

int triArea(int a,int b,int c)
{
    float area,s;
    

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    return area;
}