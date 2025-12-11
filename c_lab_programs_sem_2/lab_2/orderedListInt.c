/*
  Program to show the working and implementation of Ordered Linked List
  Achintya G 
  7-12-2025
  OrderedList.c
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ListType {
    int Data;
    struct ListType *Next;
} LISTNODE;

LISTNODE *Head;

//prototype
void InitList();
void InsertNode(int num);
void DisplayList(LISTNODE *head);
void SearchNode(int num);
int DeleteListNode(int num);

void main (){
    int num, option, choice;

    InitList();

    printf("Program to enter elements in Linked List and display it\n");

    while(1){
        printf("1.Insert Element.\n2.Display List.\n3.Search for Element\n4.Delete Number.\n5.Exit\n:");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            InsertNode(num);
        }else if (option == 2){
            DisplayList(Head);
        }else if (option == 3){
            printf("Enter a number: ");
            scanf("%d", &num);
            SearchNode(num);
        }else if (option == 4){
            printf("Enter a number: ");
            scanf("%d", &num);
            DeleteListNode(num);
        }else if (option == 5){
            break;
        }else {
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
        printf("%d -> ", Current->Data);
        Current = Current->Next;
    }
    printf("NULL\n");
}

void InsertNode(int num){

    LISTNODE *Previous, *Current, *Node;
    Node = (LISTNODE *)malloc(sizeof(LISTNODE));
    Node->Data = num;
    Node->Next = NULL;
    
    if(Head == NULL){
        Head = Node;
        return;
    }

    // Insert at the beginning if new node is smaller than Head
    if(Head->Data > Node->Data){
        Node->Next = Head;
        Head = Node;
        return;
    }

    Current = Head;
    Previous = NULL;

    // Find correct position to insert
    while(Current != NULL && Current->Data < Node->Data){
        Previous = Current;
        Current = Current->Next;
    }

    // Insert node between Previous and Current
    Previous->Next = Node;
    Node->Next = Current;
}

void SearchNode(int num){
    int i;
    LISTNODE *Current;

    if(Head == NULL){
        printf("List is empty\n");
        return;
    }
    Current = Head;
    i=0;
    while(Current != NULL){
        i +=1 ;
        if(Current -> Data == num ){
            printf("%d found at %d position.",num,i);
            return;
        }
        Current = Current->Next;
    }
    printf("%d not found in list.",num);
}

int DeleteListNode(int num)
{
    LISTNODE *Current, *Prev;

    if(Head == NULL){
        printf("List is empty\n");
        return -1;
    }
    
    // Delete from the beginning
    if (Head->Data == num){
        Current = Head;
        Head = Head->Next;
        free(Current);
        return 1;
    }
    
    // Delete from middle or end
    Current = Head;
    Prev = NULL;
    while (Current != NULL){
        if (Current->Data == num){
            Prev->Next = Current->Next;
            free(Current);
            return 1;
        }
        Prev = Current;
        Current = Current->Next;
    }
    
    return -1;
}