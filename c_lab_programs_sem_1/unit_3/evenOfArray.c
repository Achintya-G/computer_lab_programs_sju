/*
A program to input numbers into an array and display even numbers. 
<name>
<date>
evenOfArray.c
*/

#include <stdio.h>

void main()
{
    int n;

    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);

    int a[n+1];

    for (int i=1;i<=n;i++){
        printf("%d : ",i);
        scanf("%d",&a[i]);
    }

    printf("All the even numbers in the array are : \n");
    for (int i=1;i<=n;i++){
        int flag = (a[i]%2==0);
        
        if (flag){
            printf("%d \n",a[i]);
        }
    }
}