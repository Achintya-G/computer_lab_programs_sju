/*
A program to input, print and sort (Selec sort) a list of numbers in an array.
Achintya G
11-01-26
SelecSort.c
*/

#include <stdio.h>

void inputArray(int arr[], int n);
void printArray(int arr[], int n);
void SelectionSort(int arr[], int n);

void main() 
{
    int n, arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    inputArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    SelectionSort(arr, n);

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

void SelectionSort(int arr[], int n) 
{   
    int min,loc;
    for(int i = 0; i < n-1; i++) {
        min = arr[i];
        loc = i;
        for(int j = i+1; j < n; j++) {
            if (arr[j] < min){
                min = arr[j];
                loc = j;
            }
        }
        arr[loc] = arr[i];
        arr[i] = min;
    }
}