#include<stdio.h>
#include<stdlib.h>
#include"DataStructure/link_list.h"
#include"DataStructure/double_link_list.h"
#include"footer.h"
#include"array.h"
#include"array_sort.h"

int main()
{
    int choice;
    printf("///Main Program///\n");
    while(1)
    {
        printf("\nC Programs\n\n");
        printf("Data Structure Programs -\n\n");
        printf("1. for Linked-List Program\n");
        printf("2. for Double Linked-List Program\n");
        printf("3. for Array Program\n");
        printf("4. for Array Sort Program\n");
        printf("Anything else to exit!\n");
        printf("\nchoice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:  link_list();
                     break;
            case 2:  double_link_list();
                     break;
            case 3:  array();
                     break;
            case 4:  array_sort();
                     break;
            default: printf("Exiting...\n");
                     footer();
                     exit(0);
        }
    }
}
