#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[10],i,j;
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
    scanf("%d",&j);
    printf("\nEnter new value at position %d: ",j);
    scanf("%d",&array[j-1]);
    printf("\nArray after Entering new value at %d is:",j);
    for(i=0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n\nCreated by Jugal Kishore -- 2019\n");
    return 0;
}
