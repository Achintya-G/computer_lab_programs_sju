/*
A program to input, print and sort (Selec sort) a list of numbers in an array.
Achintya G
18-01-26
binarySearch.c
*/

#include <stdio.h>

void inputArray(int arr[], int n);
void printArray(int arr[], int n);
void bubbleSort(int arr[], int len);
int BinarySearch(int arr[], int n, int SearchNum);

void main() 
{
    int n, arr[20], SearchNum, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    inputArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    
    printf("Enter number to be searched: ");
    scanf("%d", &SearchNum);


    found = BinarySearch(arr, n, SearchNum);

    if(found != -1){
        printf("%d is found in the list.\n", SearchNum);
    }else{
        printf("%d is not found in the list.\n", SearchNum);
    }
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

void bubbleSort(int arr[], int len)
{
    for(int i = 0; i < len-1; i++) {
        for(int j = 0; j < len-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int BinarySearch(int arr[], int n, int SearchNum)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(SearchNum == arr[mid]){
            return 1;
        }
        else if (SearchNum < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}