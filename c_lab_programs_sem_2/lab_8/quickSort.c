// C program to implement Quick Sort Algorithm
#include <stdio.h>


void swap(int *a , int *b);
int partition(int arr[],int low,int high);
void quickSort(int arr[],int low,int high);
void inputArray(int arr[],int n);
void printArray(int arr[], int n );



int main() {
  
    
    int n, arr[20];

    printf("program to implement quick sort in C.\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    inputArray(arr, n);

    printf("Original array: ");
    printArray(arr, n);

    quickSort(arr, 0, n-1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {

    int p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {

        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

