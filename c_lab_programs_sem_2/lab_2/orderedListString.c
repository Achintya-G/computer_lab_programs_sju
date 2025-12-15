/*
  Program to show the working and implementation of Ordered Linked List
  Achintya G 
  7-12-2025
  OrderedListString.c
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ListType {
    char Data[50];
    struct ListType *Next;
} LISTNODE;

LISTNODE *Head;

//prototype
void InitList();
void InsertNode(char *str);
void DisplayList(LISTNODE *head);
void SearchNode(char *str);
void DeleteListNode(char *str);

void main (){
    int option;
    char Data[50];

    InitList();

    printf("Program to enter strings in an ordered Linked List and display it\n");

    while(1){
        printf("\n1.Insert Element.\n2.Display List.\n3.Search for Element\n4.Delete String.\n5.Exit\n:");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a string (no spaces): ");
            scanf("%s", Data);
            InsertNode(Data);
        } else if (option == 2){
            DisplayList(Head);
        } else if (option == 3){
            printf("Enter a string to search: ");
            scanf("%s", Data);
            SearchNode(Data);
        } else if (option == 4){
            printf("Enter a string to delete: ");
            scanf("%s", Data);
            DeleteListNode(Data);
        } else if (option == 5){
            break;
        } else {
            printf("Invalid Choice.\n");
        }
    }

    printf("\nExiting\n");
}


void InitList(){
    Head = NULL;
}

void DisplayList(LISTNODE *head){
    LISTNODE *Current;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    Current = head;
    while(Current != NULL){
        printf("%s -> ", Current->Data);
        Current = Current->Next;
    }
    printf("NULL\n");
}

void InsertNode(char *str){

    LISTNODE *Previous, *Current, *Node;
    Node = (LISTNODE *)malloc(sizeof(LISTNODE));

    strcpy(Node->Data, str);
    Node->Next = NULL;
    
    if(Head == NULL){
        Head = Node;
        return;
    }

    // insert at the beginning if new node is alphabetically before head
    if(strcmp(Head->Data, Node->Data) > 0){
        Node->Next = Head;
        Head = Node;
        return;
    }

    Current = Head;
    Previous = NULL;

    // find correct position to insert (keep alphabetical order)
    while(Current != NULL && strcmp(Current->Data, Node->Data) < 0){
        Previous = Current;
        Current = Current->Next;
    }

    // insert node at correct position
    Previous->Next = Node;
    Node->Next = Current;
}

void SearchNode(char *str){
    int i = 0;
    LISTNODE *Current;

    if(Head == NULL){
        printf("List is empty\n");
        return;
    }
    Current = Head;
    while(Current != NULL){
        i += 1;
        if(strcmp(Current->Data, str) == 0){
            printf("\"%s\" found at position %d.\n", str, i);
            return;
        }
        Current = Current->Next;
    }
    printf(" \"%s\" not found in list.\n", str);
}

void DeleteListNode(char *str)
{
    LISTNODE *Current, *Prev;

    if(Head == NULL){
        printf("List is empty\n");
        return ;
    }
    
    // Delete from the beginning
    if (strcmp(Head->Data, str) == 0){
        Current = Head;
        Head = Head->Next;
        free(Current);
        return ;
    }
    
    // Delete from middle or end
    Current = Head;
    Prev = NULL;
    while (Current != NULL){
        if (strcmp(Current->Data, str) == 0){
            Prev->Next = Current->Next;
            free(Current);
            printf("'%s' deleted\n",str);
            return ;
        }
        Prev = Current;
        Current = Current->Next;
    }

    printf("%s not found.\n", str);
    return ;
}