/*
A program to find the sum of first n natural numbers.
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
        sum += i;
        i++;
    }

    printf("\nSum of first %d natural numbers is : %d",n,sum);
}