#include<stdio.h>
#include<stdlib.h>

int array_sort()
{
    printf("///Program for Sorting Array///\n\n\n");
    int array[10],i,j,n,temp;
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
    //Sorting Entered Array now
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\nSorted Array is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }
    printf("\t =================================\n");
    printf("\t||Created by Jugal Kishore -- 2019||\n");
    printf("\t =================================\n");
    return 0;
}
