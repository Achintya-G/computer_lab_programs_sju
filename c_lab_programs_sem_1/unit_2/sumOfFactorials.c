/*
A program to find the sum of all factorials leading upto a number.
<name>
<date>
sumOfFactorials.c
*/

#include <stdio.h>

void main()
{
    int n,fact=1,sum=0;

    printf("how many terms?");
    scanf("%d",&n);

    int i=1;

    while (i<=n){
        fact = fact*i;
        sum += fact;
        i++;
    }

    printf("\nsum of terms : %d",sum);
}