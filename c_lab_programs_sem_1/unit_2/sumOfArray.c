/*
A program to find sum and average of all elements in an array.
<name>
<date>
sumOfArray.c
*/

#include <stdio.h>

void main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int x[n+1];


    for (int i=1;i<=n;i++){
        printf("Enter %d element : ",i);
        scanf("%d",&x[i]);
    }

    printf("The elements of the array are : \n");

    for (int i=1;i<=n;i++){
        printf("%d\n",x[i]);
    }   

}