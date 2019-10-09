#include<stdio.h>
#include<stdlib.h>

int array()
{
    int array[10],i;
    printf("///Program for Array///\n\n\n");
    printf("Enter 10 Number(s) in Array: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEntered Number(s) in Array are:");
    for(i=0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n\nEnter the position you want to enter a Number at: ");
    scanf("%d",&i);
    printf("\nEnter new value at position %d: ",i);
    scanf("%d",&array[i-1]);
    printf("\nArray after Entering new value at %d is:",i);
    for(i=0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n\nCreated by Jugal Kishore -- 2019\n");
    return 0;
}
