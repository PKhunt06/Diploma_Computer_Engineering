// P-5-C Implement insertion of node at the end of the list in singly linked list.

#include <stdio.h>
#include <stdlib.h>

// Definition of the node structure
struct node
{
    int data;
    struct node *link;
};

// Function prototypes
void insertend();
void display();

// Global pointers
struct node *header, *ptr, *temp;

int main()
{
    int choice;
    int count = 1;

    // Initialize header node
    header = (struct node *)malloc(sizeof(struct node));

    if (header == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    header->data = 0;
    header->link = NULL;

    while (count == 1)
    {
        printf("\n01 Insert node at end");
        printf("\n02 Display");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertend();
                break;

            case 2:
                display();
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("\nDo you want to continue (1 for Yes, 0 for No)? ");
        scanf("%d", &count);
    }

    return 0;
}

// Function to insert a node at the end
void insertend()
{
    int datavalue;

    printf("\nEnter the data for node: ");
    scanf("%d", &datavalue);

    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    temp->data = datavalue;
    temp->link = NULL;

    ptr = header;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
}

// Function to display the linked list
void display()
{
    printf("\nContents of the linked list are: ");

    ptr = header->link;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
}
