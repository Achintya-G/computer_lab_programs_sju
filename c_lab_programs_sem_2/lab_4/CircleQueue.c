/*
Program to show implementation of queue using linked list.
Achintya G
11-12-25
QueueMenu.c
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct CirQType{
    int Data;
    struct CirQType *Next;
}CirQueueNode;

void InitQueue();
void EnQueue(int num);
int DeQueue();


CirQueueNode *Front,*Rear;

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


int DeQueue(){
    int num;
    CirQueueNode *Curr;

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
    Rear->Next = Front;
    free(Curr);
    printf("%d was Removed.\n",num);
    return num;
}

