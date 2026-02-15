/*
  Write a menu program in C to show the working of a Binary Search Tree
  Achintya G 
  01-02-2026
  bst.c
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct TreeType{
    int Data;
    struct TreeType *Left,*Right;
}TREENODE;

TREENODE *Root;

void InitTree();
void InsertNum(int Num);
void InOrder(TREENODE *Node);
void PreOrder(TREENODE *Node);
void PostOrder(TREENODE *Node);
void DisplayLeafNodes(TREENODE *Node);
int SearchNum(int Num);


int main()
{
    
    int num, option, found;
    InitTree();

    printf("Write a menu program in C to show the working of a Binary Search Tree.\n");

    while(1){
        printf("1. Insert a number.\n2. INORDER Traversal.\n3. PREORDER Traversal.\n4. POSTORDER Traversal.\n5. Display only LEAF NODES\n6. Search for given data item.\n7. Exit.\nEnter Your Choice:");
        scanf("%d",&option);

        if (option == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            InsertNum(num);
        }else if (option == 2){
            InOrder(Root);
            printf("\n");
        }else if (option == 3){
            PreOrder(Root);
            printf("\n");
        }else if (option == 4){
            PostOrder(Root);
            printf("\n");
        }else if (option == 5){
            printf("Leaf Nodes : \n");
            DisplayLeafNodes(Root);
            printf("\n");
        }else if (option == 6){
            printf("Enter a number: ");
            scanf("%d", &num);
            found = SearchNum(num);
            if (found == 1){
                printf("Number found in Tree.\n");
            }else{
                printf("Number not found in Tree");
            }
        }else if (option == 7){
            break;
        }else {
            printf("Invalid Choice.\n");
        }
    }
    printf("\nExiting\n");
}


void InitTree()
{
    Root = NULL;
}

void InsertNum(int Num)
{
    TREENODE *Curr,*Prev,*Node;
    Node = (TREENODE *) malloc(sizeof(TREENODE));
    Node -> Data = Num;
    Node -> Left = NULL;
    Node -> Right = NULL;

    if (Root == NULL){
        Root = Node;
        return;
    }
    Curr = Root;
    while(Curr!=NULL){
        Prev = Curr;
        if (Num > Curr->Data){
            Curr = Curr -> Right;
        }else{
            Curr = Curr -> Left;
        }
    }
    
    if(Num > Prev->Data){
        Prev->Right = Node;
    }else{
        Prev->Left = Node;
    }

    return;
}

void InOrder(TREENODE *Node)
{
    if(Node!=NULL){
        InOrder(Node->Left);
        printf("%d ",Node->Data);
        InOrder(Node->Right);
    }
}

void PreOrder(TREENODE *Node)
{
    if(Node!=NULL){
        printf("%d ",Node->Data);
        PreOrder(Node->Left);
        PreOrder(Node->Right);
    }
}

void PostOrder(TREENODE *Node)
{
    if(Node!=NULL){
        PostOrder(Node->Left);
        PostOrder(Node->Right);
        printf("%d ",Node->Data);
    }
}

void DisplayLeafNodes(TREENODE *Node)
{   
    if(Node != NULL){
        if(Node->Left == Node->Right){
            printf("%d ", Node->Data);
            return;
        }
        DisplayLeafNodes(Node->Left);
        DisplayLeafNodes(Node->Right);
    }
}

int SearchNum(int Num)
{
    TREENODE *Curr;

    if (Root == NULL){
        return 0;
    }

    Curr = Root;

    while(Curr!=NULL){
        if (Num == Curr->Data){ 
            return 1;
        }else if (Num > Curr->Data){
            Curr = Curr -> Right;
        }else{
            Curr = Curr -> Left;
        }
    }

    return 0;

}
