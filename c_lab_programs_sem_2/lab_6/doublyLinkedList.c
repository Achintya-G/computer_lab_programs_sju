/*
  Menu based Program to show the working and implementation of Doubly Linked List
  Achintya G 
  18-12-2025
  doublyLinkedList.c
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct ListType {
  int Data;
  struct ListType *Next,*Prev;
} DBLLNKLISTNODE;

DBLLNKLISTNODE *Head;

//prototype
void InitList();
void InsertNode(int num);
void DisplayDoublyLinkedList();
void DeleteNode(int num);

int main (){
    int num, option;
    InitList();

    printf("Program to enter elements in doubly Linked List and display it\n");

    while(1){
        printf("1. Insert Element.\n2. Delete Element.\n3. Display list.\n4. Exit.\nEnter Your Choice:");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            InsertNode(num);
        }else if (option == 2){
            printf("Enter a number: ");
            scanf("%d", &num);
            DeleteNode(num);
        }else if (option == 3){
            DisplayDoublyLinkedList();
        }else if (option == 4){
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

void DisplayDoublyLinkedList()
{
    DBLLNKLISTNODE *curr = Head, *prev;
    if (curr == NULL) {
        printf("\nList is Empty.\n");
        return;
    }
    printf("Forward: \n");
    while (curr != NULL) {
        printf("%d -> ", curr->Data);
        prev = curr;
        curr = curr->Next;
    }
    printf("NULL \n");
    printf("Backward: \n");
    while (prev != NULL) {
        printf("%d -> ", prev->Data);
        prev = prev->Prev;
    }
    printf("NULL \n");
}


void InsertNode(int num){
    DBLLNKLISTNODE *Current, *Node;
    Node = (DBLLNKLISTNODE *)malloc(sizeof(DBLLNKLISTNODE));
    Node->Data = num;
    Node->Prev = NULL;
    Node->Next = NULL;

    if(Head == NULL){
      Head = Node;
      return;
    }
    Current = Head;
    while(Current->Next != NULL){
      Current = Current->Next;
    }
    Node-> Prev = Current;
    Current-> Next = Node;
}

void DeleteNode(int num)
{
    DBLLNKLISTNODE *Current, *Prev, *nextNode;

    if(Head == NULL){
        printf("List is empty\n");
        return ;
    }
    
    if (Head->Data == num){
        Current = Head;
        Head = Head->Next;
        free(Current);
        if (Head != NULL){ 
            Head->Prev = NULL;
        }
        return ;
    }

    Current = Head;
    Prev = NULL;
    nextNode = NULL;
    while (Current != NULL){
        if (Current->Data == num){
            Prev->Next = Current->Next;
            nextNode = Current->Next;
            if (nextNode != NULL){
                nextNode -> Prev = Prev;
            }
            free(Current);
            return ;
        }
        Prev = Current;
        Current = Current->Next;
    }
    printf("Item not found\n");
    return ;
}