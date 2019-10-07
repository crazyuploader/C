#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node *START=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
}

void insertNode()
{
    struct node *temp, *t;
    temp=createnode();
    printf("Enter a value: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(START==NULL)
    {
        START=temp;
        printf("Node is created at Address = %d and its value is = %d",temp,temp->data);
    }
    else
    {
        t=START;
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
    struct node *r;
    if(START==NULL)
    {
        printf("Linked-List is empty!");
    }
    else
    {
        r=START;
        while(r!=NULL)
        {
            printf("Node Address is = %d and its value is =",r,*r);
            free(r);
        }
    }
}

void viewNode()
{
    struct node *t;
    if(START==NULL)
    {
        printf("Linked-List is empty!");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
        printf("\nNode Address is = %d and its value is = %d",t,t->data);
        t=t->link;
        }
    }
}

int length()
{
    struct node *t;
    int len=0;
    if(START==NULL)
    {
        printf("Linked-List is empty!");
        return 0;
    }
    else
    {
        t=START;
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
    struct node *t, *p, *q;
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
            t=START;
            START=t->link;
            t->link=NULL;
        }
        else
        {
            p=START;
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

int main()
{
    int choice;
    printf("///Linked-List Program///");
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
