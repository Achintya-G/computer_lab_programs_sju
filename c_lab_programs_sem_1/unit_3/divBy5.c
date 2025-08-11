/*
A program to Find out if a number is divisible by 5.
<name>
<date>
divBy5.c
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number to check if it is divisible by 5:");
    scanf("%d",&n);

    int flag = (n%5==0);

    if (flag){
        printf("%d is divisible by 5.",n);
    } else {
        printf("%d is not divisible by 5, The next number divisible by 5 is %d.",n,(n+(5-n%5)));
    }
}