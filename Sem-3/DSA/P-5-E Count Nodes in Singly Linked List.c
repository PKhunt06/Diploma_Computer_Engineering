// P-5-E Implement counting number of nodes in linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct node
{
    int data;
    struct node *link;
};

// Function prototypes
void count();
void display();

// Global pointers
struct node *header, *ptr, *temp;

int main()
{
    int choice;
    int datavalue, a = 1;

    header = NULL;

    // Input nodes
    while (a == 1)
    {
        printf("\nEnter the data for node: ");
        scanf("%d", &datavalue);

        temp = (struct node *)malloc(sizeof(struct node));

        temp->data = datavalue;
        temp->link = NULL;

        if (header == NULL)
        {
            header = temp;
        }
        else
        {
            ptr = header;

            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }

            ptr->link = temp;
        }

        printf("Do you want to continue (1 for Yes, 0 for No): ");
        scanf("%d", &a);
    }

    do
    {
        printf("\n1. Count nodes");
        printf("\n2. Display nodes");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                count();
                break;

            case 2:
                display();
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("\nDo you want to continue (1 for Yes, 0 for No): ");
        scanf("%d", &a);

    } while (a == 1);

    return 0;
}

// Function to count nodes
void count()
{
    struct node *temp = header;
    int length = 0;

    while (temp != NULL)
    {
        length++;
        temp = temp->link;
    }

    printf("\nNumber of nodes in the linked list = %d", length);
}

// Function to display
void display()
{
    struct node *ptr = header;

    if (ptr == NULL)
    {
        printf("\nThe list is empty.");
        return;
    }

    printf("\nNodes in the linked list are: ");

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
}
