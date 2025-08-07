/*
A program to find distance between two point.
<name>
<date>
dist.c
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int x1,x2,y1,y2;
    float dist;

    printf("Enter the x and y values of 1st point :");
    scanf("%d %d",&x1,&y1);

    printf("Enter the x and y values of 2nd point :");
    scanf("%d %d",&x2,&y2);

    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("Distance between two points is : %f",dist);
}