/*
A program to sum of two MxN matrices
<name>
<date>
sumOfMatrix.c
*/

#include <stdio.h>

void main()
{
    int m,n;

    printf("Enter dimensions of matrix:");
    scanf("%d %d",&m,&n);

    int a[m][n],b[m][n],c[m][n];

    printf("Enter values of first matrix:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d,%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter values of second matrix:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d,%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum = \n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}