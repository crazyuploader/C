#include<stdio.h>
#include<stdlib.h>
#include"DataStructure/link_list.h"
#include"DataStructure/double_link_list.h"
#include"footer.h"
#include"DataStructure/array.h"
#include"DataStructure/array_sort.h"
#include"DataStructure/stack.h"

int main()
{
    int choice;
    printf("///Main Program///\n");
    while(1)
    {
        printf("\nC Programs\n\n");
        printf("Data Structure Programs -\n\n");
        printf("1. for Array Program\n");
        printf("2. for Array Sorting Program\n");
        printf("3. for Linked-List Program\n");
        printf("4. for Double Linked-List Program\n");
        printf("5. for Stack Program\n");
        printf("Anything else to exit!\n");
        printf("\nchoice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:  array();
                     break;
            case 2:  array_sort();
                     break;
            case 3:  link_list();
                     break;
            case 4:  double_link_list();
                     break;
            case 5:  Stack();
                     break;
            default: printf("Exiting...\n");
                     footer();
                     exit(0);
        }
    }
}
