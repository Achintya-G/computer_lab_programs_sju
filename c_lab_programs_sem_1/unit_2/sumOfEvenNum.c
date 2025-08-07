/*
A program to find the sum of first n even numbers.
<name>
<date>
sumOfNaturalNum.c
*/

#include <stdio.h>

void main()
{
    int n,sum=0;

    printf("How many terms to add up to ? ");
    scanf("%d",&n);

    int i=1;

    while (i<=n){
        sum += 2*i;
        i++;
    }

    printf("\nSum of first %d even numbers is : %d",n,sum);
}