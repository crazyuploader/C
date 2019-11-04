//C program for Stack and its Operations
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int top= -1;
int stack[SIZE];

void push()
{
    int item;
    if(top==(SIZE-1))
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter the item to be pushed in Stack: ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("\nPopped element is %d\n",stack[top]);
        top=top-1;
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nStack elements:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

int main()
{
    printf("///Stack Program///\n\n\n");
    int choice;
    while(1)
    {
        printf("\nchoices: \n\n");
        printf("1. Push an element\n");
        printf("2. Pop an element\n");
        printf("3. Display Stack\n");
        printf("Anything else to exit!\n");
        printf("\nYour choice? ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:  push();
                     break;
            case 2:  pop();
                     break;
            case 3:  display();
                     break;
            default: printf("Exiting...\n\n");
                     printf("\t||Created by Jugal Kishore -- 2019||\n");
                     exit(0);
        }
    }
}
