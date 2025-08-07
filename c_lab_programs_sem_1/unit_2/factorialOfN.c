/*
A program to find the factorial of a given number.
<name>
<date>
factorialOfN.c
*/

#include <stdio.h>

void main()
{
    int n,fact=1;

    printf("Which numbers factorial do you want to know? ");
    scanf("%d",&n);

    int i=1;

    while (i<=n){
        fact = fact*i;
        i++;
    }

    printf("\nFactorial of %d is %d",n,fact);
}