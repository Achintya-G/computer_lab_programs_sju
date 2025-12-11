/*
Program to show implementation of queue using linked list.
Achintya G
11-12-25
QueueMenu.c
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct QueueType{
    int Data;
    struct QueueType *Next;
}QueueNode;

void InitQueue();
void EnQueue(int num);
int DeQueue();


QueueNode *Front,*Rear;

int main()
{
    int num,option;
    InitQueue();
    
    printf("Program to show working of a Queue \n");

    while(1){
        printf("1.EnQueue Element.\n2.DeQueue Element.\n3.Exit\n:");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            EnQueue(num);
        }else if (option == 2){
            DeQueue();
        }else if (option == 3){
            break;
        }else {
            printf("Invalid Choice.\n");
        }
    }
    printf("\nExiting\n");
}


void InitQueue(){
    Front = NULL;
    Rear  = NULL;
}

void EnQueue(int num){
    QueueNode *Current, *Node;
    Node = (QueueNode *)malloc(sizeof(QueueNode));
    Node->Data = num;
    Node->Next = NULL;

    if(Front == NULL){
      Front = Node;
      Rear = Node;
      return;
    }
    Current = Rear;
    Current-> Next = Node;
    Rear = Node;
}


int DeQueue(){
    int num;
    QueueNode *Curr;

    if(Front == NULL){
        printf("Queue is empty\n");
        return -1;
    }
    if(Front == Rear){
        Curr = Front;
        num = Curr -> Data;
        Front = Rear = NULL;
        free(Curr);
        printf("%d was Removed.\n",num);
        return num;
    }
    
    Curr = Front;
    num = Curr -> Data;
    Front = Curr -> Next;
    free(Curr);
    printf("%d was Removed.\n",num);
    return num;
}

