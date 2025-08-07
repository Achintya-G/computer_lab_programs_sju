/*
A program to find the standard deviation of all elements in an array.
<name>
<date>
stdDevOfArray.c
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n,s=0,s2=0;
    float sd;

    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);

    int x[n+1];

    for (int i=1;i<=n;i++){
        printf("Enter %d element : ",i);
        scanf("%d",&x[i]);
    }

    for (int i=1;i<=n;i++){
        s += x[i];
        s2 += (x[i]*x[i]);
    }

    sd = sqrt((s2/n)-((s*s)/(n*n)));

    printf("Standard Deviation of all the elements in the array is %f",sd);

}