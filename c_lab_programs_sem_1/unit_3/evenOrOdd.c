/*
A program to Find out if a number is even or odd.
<name>
<date>
evenOrOdd.c
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number to check if it even or odd :");
    scanf("%d",&n);

    int flag = (n%2==0);

    if (flag){
        printf("%d is even.",n);
    } else {
        printf("%d is odd.",n);
    }
}