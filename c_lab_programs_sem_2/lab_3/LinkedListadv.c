/*
  Menu driven program for Singly Linked List Operations
  (Max, Count, Delete Specific, Delete Last)
  Pranav
  14-12-2025
  linkedlist_ops.c
*/

#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

typedef struct ListType {
  int Data;
  struct ListType *Next;
} LISTNODE;

LISTNODE *Head;

//prototype
void InitList();
void InsertNode(int num);
void DisplayList(LISTNODE *head);
void FindMax();
void CountNodes();
void DeleteNode(int num);
void DeleteLastNode();

int main (){
  int num, option, choice;

  InitList();

  printf("Program to enter elements in Linked List and display it\n");

  while(1){
    printf("1.Insert Element.\n2.Display List.\n3.Find Max Value\n4.Count Nodes.\n5.Delete a specific Number\n6.Delete Last Node\n7.Exit\n:");
    scanf("%d",&option);

    if (option == 1){
      printf("Enter a number: ");
      scanf("%d", &num);
      InsertNode(num);
    }else if (option == 2){
      DisplayList(Head);
    }else if (option == 3){
      FindMax();
    }else if (option == 4){
      CountNodes();
    }else if (option == 5){
      printf("Enter a number: ");
      scanf("%d", &num);
      DeleteNode(num); 
    }else if (option == 6){
      DeleteLastNode();
    }else if (option == 7){
      break;
    }else {
      printf("Invalid Choice.\n");
    }
  }
  printf("\nExiting\n");
  
  return 0;
}

void InitList(){
  Head = NULL;
}

void InsertNode(int num){
  LISTNODE *Current, *Node;
  
  Node = (LISTNODE *)malloc(sizeof(LISTNODE));
  Node->Data = num;
  Node->Next = NULL;

  if(Head == NULL){
    Head = Node;
    return;
  }

  Current = Head;
  while(Current->Next != NULL){
    Current = Current->Next;
  }
  Current->Next = Node;
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

void FindMax(){
  LISTNODE *Current;
  int max;

  if(Head == NULL){
    printf("The List is empty.\n");
    return ;
  }

  Current = Head;
  max = Head->Data; // Initialize max with the first element

  while(Current != NULL){
    if(Current->Data > max){
      max = Current->Data;
    }
    Current = Current->Next;
  }
  printf("Maximum Value in the list is: %d\n", max);
  return ;
}

void CountNodes(){
  LISTNODE *Current;
  int count = 0;

  Current = Head;
  while(Current != NULL){
    count++;
    Current = Current->Next;
  }

  
  printf("Total number of nodes: %d\n", count);
  return ;
}

void DeleteNode(int num){
  LISTNODE *Current, *Previous;

  if(Head == NULL) {
    return;
  }

  // Case 1: Delete Head
  if(Head->Data == num){
    Current = Head;
    Head = Head->Next;
    free(Current);
    return ;
  }

  // Case 2: Traverse to find
  Current = Head;
  Previous = NULL;
  
  while(Current != NULL && Current->Data != num){
    Previous = Current;
    Current = Current->Next;
  }

  if(Current == NULL){
    return ;
  }

  // Case 3: Delete
  Previous->Next = Current->Next;
  free(Current);
  return ;
}

void DeleteLastNode(){
  int num;
  LISTNODE *Current, *Previous;
  num = 0; 

  if(Head == NULL){
    printf("The list is empty.");
    return;
  }

  // Case 1: Only one node exists
  if(Head->Next == NULL){
    num = Head ->Data;
    free(Head);
    Head = NULL;
    printf("%d was deleted.\n",num);
    return ;
  }

  // Case 2: Traverse to the last node
  Current = Head;
  Previous = NULL;

  while(Current->Next != NULL){
    Previous = Current;
    Current = Current->Next;
  }

  // Current is now the last node, Previous is the second to last
  Previous->Next = NULL;

  printf("%d was deleted.\n",num);
  free(Current);
  return ;
}