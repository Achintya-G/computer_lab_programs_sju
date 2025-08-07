/*
A program to calculate simple interest.
<name>
<date>
simpleinterest.c
*/

#include <stdio.h>

void main(){
    float p,r,t,interest;

    printf("Enter the principal,rate and time:");
    scanf("%f %f %f",&p,&r,&t);
    
    interest = (p*r*t)/100;
    printf ("\nThe interest is : %f",interest);
}