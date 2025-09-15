/*
A program to input, print and sort (Bubble sort) a list of numbers in an array.
<name>
<date>
bubbleSort.c
*/
#include <stdio.h>

void inputArray(int arr[], int n);
void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);

void main() 
{
    int n, arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

}



void inputArray(int arr[], int n) 
{
    printf("Enter %d numbers:\n", n);
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

void bubbleSort(int arr[], int n) 
{
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}