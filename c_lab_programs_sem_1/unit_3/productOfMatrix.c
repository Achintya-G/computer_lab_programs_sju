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

    printf("program to find product  of two matrices of dimensions MxP and PxN\n");

    printf("Enter dimensions of first matrix:");
    scanf("%d %d",&m,&p);

    printf("Enter number of columns of second matrix:");
    scanf("%d", &n);

    int a[10][10],b[10][10],c[10][10];

    printf("Enter values of first matrix:\n");
    for (int i=1;i<=m;i++){
        for (int j=1;j<=p;j++){
            printf("%d,%d :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter values of second matrix:\n");
    for (int i=1;i<=p;i++){
        for (int j=1;j<=n;j++){
            printf("%d,%d :",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for (int i = 1; i <=m; i++) {
        for (int j = 1; j <=n; j++) {
            c[i][j] = 0;
            for (int k = 1; k <= p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct = \n");
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}