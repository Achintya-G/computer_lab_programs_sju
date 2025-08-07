/*
A program to input some numbers into a array and find its sum and average.
<name>
<date>
sumAndAverageOfArray.c
*/

#include <stdio.h>

void main()
{
    int n,sum=0,avg=0;

    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);

    int x[n+1];

    for (int i=1;i<=n;i++){
        printf("Enter %d element : ",i);
        scanf("%d",&x[i]);
    }

    for (int i=1;i<=n;i++){
        sum += x[i];
    }

    avg = sum/n;

    printf("\nSum of all elemenst in array is : %d",sum);
    printf("\nAverage of all elemenst in array is : %d",avg);
}