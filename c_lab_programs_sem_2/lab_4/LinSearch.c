/*
A menu-based program to input, print and search for an element(using linear search) in an array using function sub-programs.
Achintya G
04-01-2026
bubbleSort.c
*/
#include <stdio.h>

void inputElement(int n, int arr[],int *len); // Using a pointer to int len only because this function modifies its values.
void printArray(int arr[], int len);
void LinSearch(int n, int arr[], int len);



void main() 
{
    int option, n, arr[20], len;
    len = 0;

    printf("A menu-based program to input, print and search for an element(using linear search) in an array using function sub-programs.\n");
    while(1){
        printf("1.Insert Element.\n2.Display List.\n3.Search for element using Linear search.\n4.Exit\n:");
        scanf("%d",&option);
        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &n);
            inputElement(n, arr, &len);
        }else if (option == 2){
            printArray(arr, len);
        }else if (option == 3){
            printf("Enter a number: ");
            scanf("%d", &n);
            LinSearch(n, arr, len);
        }else if (option == 4){
            break;
        }else {
            printf("Invalid Choice.\n");
        }
    }
    printf("\nExiting\n");
}


void inputElement(int n, int arr[],int *len) 
{   
    arr[*len] = n;
    *len += 1;
}

void printArray(int arr[], int len) 
{   
    if (len == 0){
        printf("The Array is empty.");
        return;
    }

    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void LinSearch(int n, int arr[], int len) 
{   
    for(int i = 0; i < len-1; i++) {
        if (arr[i] == n ){
            printf("%d found at index %d of array.",n ,i);
            return;
        }
    }
    printf("%d was not found in array.",n);
}