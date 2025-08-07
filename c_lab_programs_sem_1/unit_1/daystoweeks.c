/*
A program to convert days to days and weeks.
<name>
<date>
daystoweeks.c
*/


#include <stdio.h>

void main(){
    int d,w,rd;
    printf("Enter number of days: ");
    scanf("%d",&d);
    w = d/7;
    rd = d%7;
    printf("\nThe number of weeks:%d \nThe number of days:%d",w,rd);
}