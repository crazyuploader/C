#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[10],i;
    printf("Enter 10 Number(s) in Array: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEntered Number(s) are:");
    for(i=0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n\nCreated by Jugal Kishore -- 2019\n");
    return 0;
}
