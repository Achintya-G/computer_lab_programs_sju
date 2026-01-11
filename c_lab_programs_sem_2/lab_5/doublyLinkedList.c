/*
  Program to show the working and implementation of Linked List
  Achintya G 
  1-12-2025
  linkedListBasic.c
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



typedef struct ListType {
  int Data;
  struct ListType *Next,*Prev;
} LISTNODE;

LISTNODE *Head;

//prototype
void InitList();
void InsertNode(int num);
void DisplayForward();
void DisplayBackward();
void DeleteListNode(int num);

int main (){
    int num, option;
    LISTNODE *Curr;
    Curr = Head;
    InitList();

    printf("Program to enter elements in doubly Linked List and display it\n");


    while(1){
        printf("1 - Insert Element.\n2. Delete Element.\n3. Display list in forward.\n4. Display list in backward.\n5. Exit.\nEnter Your Choice:");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            InsertNode(num);
        }else if (option == 2){
            printf("Enter a number: ");
            scanf("%d", &num);
            DeleteListNode(num);
        }else if (option == 3){
            DisplayForward();
        }else if (option == 4){
            DisplayBackward();
        }else if (option == 5){
            break;
        }else {
            printf("%d", option);
            printf("Invalid Choice.\n");
        }
    }
    printf("\nExiting\n");
}

void InitList(){
  Head = NULL;
}

void DisplayForward()
{
    LISTNODE *curr = Head;
    if (curr == NULL) {
        printf("\nList is Empty.\n");
        return;
    }
    printf("Forward: \n");
    while (curr != NULL) {
        printf("%d ->", curr->Data);
        curr = curr->Next;
    }
    printf("\n");
}

void DisplayBackward()
{
    LISTNODE *curr = Head;
    if (curr == NULL) {
        printf("\nList is Empty.\n");
        return;
    }
    /* move to tail */
    while (curr->Next != NULL) curr = curr->Next;
    printf("Backward: \n");
    while (curr != NULL) {
        printf("%d  ->", curr->Data);
        curr = curr->Prev;
    }
    printf("\n");
}


void InsertNode(int num){
    LISTNODE *Current, *Node;
    Node = (LISTNODE *)malloc(sizeof(LISTNODE));
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

void DeleteListNode(int num)
{
    LISTNODE *Current, *Prev, *nextNode;

    if(Head == NULL){
        printf("List is empty\n");
        return ;
    }
    
    // Delete from the beginning
    if (Head->Data == num){
        Current = Head;
        Head = Head->Next;
        free(Current);
        if (Head != NULL){ 
            Head->Prev = NULL;
        }
        return ;
    }
    
    // Delete from middle or end
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