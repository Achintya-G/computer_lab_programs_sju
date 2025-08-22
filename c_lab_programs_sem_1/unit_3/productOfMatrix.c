/*
A program to find product  of two matrices of dimensions MxP and PxN
<name>
<date>
productOfMatrix.c
*/

#include <stdio.h>

void main()
{
    int m,n,p;

    printf("Enter dimensions of first matrix:");
    scanf("%d %d",&m,&n);

    printf("Enter dimensions of second matrix:");
    scanf("%d %d",&p,&n);

    int a[m][p],b[p][n],c[m][n];

    printf("Enter values of first matrix:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<p;j++){
            printf("%d,%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter values of second matrix:\n");
    for (int i=0;i<p;i++){
        for (int j=0;j<n;j++){
            printf("%d,%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct = \n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}