/*
A program to input, print and sort (Insertion sort) a list of numbers in an array.
Achintya G
11-01-26
InsertionSort.c
*/

#include <stdio.h>

void inputArray(int arr[], int n);
void printArray(int arr[], int n);
void InsertionSort(int arr[], int n);

void main() 
{
    int n, arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    inputArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    InsertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

}



void inputArray(int arr[], int n) 
{
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) 
{
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void InsertionSort (int arr[], int n){
    int x, i, j;
    for(i = 1; i < n; i++){
        x = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > x){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = x;
    }
}