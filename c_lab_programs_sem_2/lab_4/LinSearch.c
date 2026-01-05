/*
A menu-based program to input, print and search for an element(using linear search) in a linked list using function sub-programs.
Achintya G
04-01-2026
LinSearch.c
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct ListType {
    int Data;
    struct ListType *Next;
} LISTNODE;

LISTNODE *Head;

// prototypes
void InitList();
void InsertNode(int num);
void DisplayList(LISTNODE *head);
void LinSearch(int num);

int main()
{
    int option, num;
    InitList();

    printf("A menu-based program to insert, display and search for an element (linear search) in a linked list.\n");
    while (1) {
        printf("1.Insert Element.\n2.Display List.\n3.Search for element using Linear search.\n4.Exit\n:");
        scanf("%d", &option);
        if (option == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);
            InsertNode(num);
        } else if (option == 2) {
            DisplayList(Head);
        } else if (option == 3) {
            printf("Enter a number: ");
            scanf("%d", &num);
            LinSearch(num);
        } else if (option == 4) {
            break;
        } else {
            printf("Invalid Choice.\n");
        }
    }
    printf("\nExiting\n");
    return 0;
}

void InitList() {
    Head = NULL;
}

void InsertNode(int num) {
    LISTNODE *Current, *Node;
    Node = (LISTNODE *)malloc(sizeof(LISTNODE));
    if (!Node) {
        printf("Memory allocation failed.\n");
        return;
    }
    Node->Data = num;
    Node->Next = NULL;

    if (Head == NULL) {
        Head = Node;
        return;
    }

    Current = Head;
    while (Current->Next != NULL) {
        Current = Current->Next;
    }
    Current->Next = Node;
}

void DisplayList(LISTNODE *head) {
    LISTNODE *Current;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    Current = head;
    while (Current != NULL) {
        printf("%d -> ", Current->Data);
        Current = Current->Next;
    }
    printf("NULL\n");
}

void LinSearch(int num) {
    LISTNODE *Current = Head;
    int index = 0;
    if (Head == NULL) {
        printf("The List is empty.\n");
        return;
    }
    while (Current != NULL) {
        if (Current->Data == num) {
            printf("%d found at index %d of list.\n", num, index);
            return;
        }
        Current = Current->Next;
        index++;
    }
    printf("%d was not found in list.\n", num);
}