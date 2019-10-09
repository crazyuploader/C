#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[10],i,j,temp;
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
    //Sorting Entered Array now
    for(i=0;i<10;i++)
    {
        for(j=0;j<(10-i-1);j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\n\nArray after sorting is:");
    for(i=0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n\nCreated by Jugal Kishore -- 2019\n");
    return 0;
}
