#include<stdio.h>
#include<stdlib.h>

int array()
{
    int array[30],i,n;
    printf("///Program for Array///\n\n\n");
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("Enter %d Number(s) in Array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEntered Array is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\nEnter the position you want to enter a Number at: ");
    scanf("%d",&i);
    printf("Enter new value at position %d: ",i);
    scanf("%d",&array[i-1]);
    printf("Array after Entering new value at %d is:",i);
    for(i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n\nCreated by Jugal Kishore -- 2019\n");
    return 0;
}
