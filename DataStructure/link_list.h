#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node *root=NULL;
struct Node* createNode()
{
    struct Node *n;
    n=(struct Node*)malloc(sizeof(struct Node));
    return n;
}

void insertNode()
{
    struct Node *temp, *t;
    temp=createNode();
    printf("Enter a value: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
        printf("Node is created at Address = %d and its value is = %d",temp,temp->data);
    }
    else
    {
        t=root;
        while(t->link!=NULL)
        {
        t=t->link;
        }
        t->link=temp;
        printf("Node is created at Address = %d and its value is = %d",temp,temp->data);
    }
}

void deleteNode()
{
    struct Node *r;
    if(root==NULL)
    {
        printf("Linked-List is empty!");
    }
    else
    {
        r=root;
        while(r!=NULL)
        {
            printf("Node Address is = %d and its value is =",r,*r);
            free(r);
        }
    }
}

void viewNode()
{
    struct Node *t;
    if(root==NULL)
    {
        printf("Linked-List is empty!");
    }
    else
    {
        t=root;
        while(t!=NULL)
        {
        printf("\nValue of Node at Address: %d is = %d",t,t->data);
        t=t->link;
        }
    }
}

int length()
{
    struct Node *t;
    int len=0;
    if(root==NULL)
    {
        printf("Linked-List is empty!");
        return 0;
    }
    else
    {
        t=root;
        while(t!=NULL)
        {
        t=t->link;
        len=len++;
        }
        return len;
    }
}

void deleteLocation()
{
    struct Node *t, *p, *q;
    int loc,i=1;
    printf("Enter location you want to delete node at: ");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("Invalid Location");
    }
    else
    {
        if(loc==1)
        {
            t=root;
            root=t->link;
            t->link=NULL;
        }
        else
        {
            p=root;
            while(i<loc-1)
            {
                p=p->link;
                i++;
            }
            q=p->link;
            p->link=q->link;
            q->link=NULL;
            free(q);
        }
    }
}

int link_list()
{
    int choice;
    printf("///Linked-List Program///\n\n\n");
    printf("    ------------------------------              ------------------------------\n");
    printf("    |              |             |            \\ |              |             |\n");
    printf("    |     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |\n");
    printf("    |              |             |            / |              |             |\n");
    printf("    ------------------------------              ------------------------------\n");
    while(1)
    {
        printf("\n\n 1: Insert a Node");
        printf("\n 2: Delete a Node");
        printf("\n 3: View every Node");
        printf("\n 4: Delete Node at a particular location");
        printf("\n 5: Exit");
        printf("\n\nEnter a choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:  insertNode();
                     break;
            case 2:  deleteNode();
                     break;
            case 3:  viewNode();
                     break;
            case 4:  deleteLocation();
                     break;
            case 5:  printf("Exiting...\n\n");
                     printf("\t =================================\n");
                     printf("\t||Created by Jugal Kishore -- 2019||\n");
                     printf("\t =================================\n");
                     exit(0);
                     break;
            default: printf("Invalid Choice entered.");
        }
    }
}
