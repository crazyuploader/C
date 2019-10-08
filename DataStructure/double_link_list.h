#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;  //Pointer to left node
    struct node *right; //Pointer to Right node
};

struct node *START;
struct node *createnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
};

void insert_begin()
{
    struct node *pointer;
    int item;
    pointer=createnode();
    printf("\nEnter a value for a node: ");
    scanf("%d",&item);
    if(START=NULL)
    {
        pointer->left=NULL;
        pointer->right=NULL;
        pointer->data=item;
        START=pointer;
    }
    else
    {
        pointer->data=item;
        pointer->left=NULL;
        pointer->right=START;
        START=pointer;
    }
    printf("\nNode inserted at Address = %d and its value = %d",pointer,item);
}

void insert_last()
{
    struct node *pointer,*temp;
    int item;
    pointer=createnode();
    printf("\nEnter value for node: ");
    scanf("%d",&item);
    pointer->data=item;
    if(START==NULL)
    {
        pointer->right=NULL;
        pointer->left=NULL;
        START=pointer;
    }
    else
    {
        temp=START;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        temp->right=pointer;
        pointer->left=temp;
        pointer->right=NULL;
    }
    printf("\nNode inserted at Address = %d and its value = %d",pointer,item);
}

void insert_specified()
{
    struct node *pointer,*temp;
    int loc,i,item;
    pointer=createnode();
    temp=START;
    printf("\nEnter location after which you want to add a Node: ");
    scanf("%d",&loc);
    for(i=0;i<loc;i++)
    {
        temp=temp->right;
        if(temp==NULL)
        {
            printf("\nThere are less than %d element(s)",loc);
        }
    }
    pointer->data=item;
    pointer->right=temp->right;
    pointer->left=temp;
    temp->right=pointer;
    temp->right->left=pointer;
    printf("\nNode inserted at Address = %d and its value = %d",pointer,item);
}

void display()
{
    struct node *pointer;
    printf("Printing values...");
    pointer=START;
    while(pointer!=NULL)
    {
        printf("\n%d",pointer->data);
        pointer=pointer->right;
    }
}

int double_link_list()
{
    int choice;
    printf("///Program for Double Linked-List///\n\n\n");
    printf("        ---------------------------------           ---------------------------------\n");
    printf("        |       |               |       |        \\\\\\|       |               |       |\n");
    printf("        |  PREV |     DATA      |  NEXT |-----------|  PREV |     DATA      |  NEXT |\n");
    printf("        |       |               |       |        ///|       |               |       |\n");
    printf("        ---------------------------------           ---------------------------------\n");
    while(1)
    {
        printf("\n\nChoose an option from the following list\n");
        printf("========================================\n");
        printf("1: Insert a Node at beginning\n");
        printf("2: Insert a Node at last\n");
        printf("3: Insert a Node after specified location\n");
        printf("4: Display the values of every node\n");
        printf("Anything else to exit!\n");
        printf("\nchoice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:  insert_begin();
                     break;
            case 2:  insert_last();
                     break;
            case 3:  insert_specified();
                     break;
            case 4:  display();
                     break;
            default: printf("Exiting...\n\n");
                     printf("\t =================================\n");
                     printf("\t||Created by Jugal Kishore -- 2019||\n");
                     printf("\t =================================\n");
                     exit(0);
                     break;
        }
    }
}
