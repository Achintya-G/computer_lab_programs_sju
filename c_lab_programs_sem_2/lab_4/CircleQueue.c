/*
Program to show implementation of Circular queue using linked list.
Achintya G
04-01-2026
CircleQueue.c
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct CirQType{
    int Data;
    struct CirQType *Next;
}CirQueueNode;

void InitQueue();
void EnQueue(int num);
void DeQueue();
void DisplayQueue();


CirQueueNode *Front,*Rear;

int main()
{
    int num,option;
    InitQueue();
    
    printf("Program to show working of a Circular Queue \n");

    while(1){
        printf("1.EnQueue Element.\n2.DeQueue Element.\n3.Display Queue.\n4.Exit.\nEnter Choice: ");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            EnQueue(num);
        }else if (option == 2){
            DeQueue();
        }else if (option == 3){
            DisplayQueue();
        }else if (option == 4){
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
    CirQueueNode *Current, *Node;
    Node = (CirQueueNode *)malloc(sizeof(CirQueueNode));
    Node->Data = num;
    Node->Next = NULL;

    if(Front == NULL){
        Front = Node;
        Rear = Node;
        Rear -> Next = Front;
        return;
    }

    
    Rear -> Next = Node;
    Node -> Next = Front;
    Rear = Node;
}


void DeQueue(){
    int num;
    CirQueueNode *Curr;

    if(Front == NULL){
        printf("Queue is empty\n");
        return ;
    }
    if(Front == Rear){
        Curr = Front;
        num = Curr -> Data;
        Front = Rear = NULL;
        free(Curr);
        printf("%d was Removed.\n",num);
        return ;
    }
    
    Curr = Front;
    num = Curr -> Data;
    Front = Curr -> Next;
    Rear->Next = Front;
    free(Curr);
    printf("%d was Removed.\n",num);
    return ;
}

void DisplayQueue(){
    CirQueueNode *Current;
    if (Front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    Current = Front;
    while (Current->Next != Front ) {
        printf("%d -> ", Current->Data);
        Current = Current->Next;
    }
    printf("%d -> ", Current->Data);
    printf("Front\n");
}
