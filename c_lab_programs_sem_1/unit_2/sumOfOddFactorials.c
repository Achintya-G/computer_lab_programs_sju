/*
A program to find the sum of n terms of odd factorials.
<name>
<date>
sumOfOddFactorials.c
*/

#include <stdio.h>

void main()
{
    int n,fact=1,sum=0;

    printf("how many terms?");
    scanf("%d",&n);

    int i=1;
    int j=0;

    while (j<n){
        fact = fact*i;
        if (i%2==1){
            sum += fact;
            j++;
        }
        i++;
    }

    printf("\nsum of terms : %d",sum);
}