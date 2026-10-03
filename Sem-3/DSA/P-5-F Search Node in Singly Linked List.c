// P-5-F Implement searching of a node in linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct node
{
    int data;
    struct node *link;
};

// Function prototypes
void search();
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
        printf("\n1. Search node");
        printf("\n2. Display nodes");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                search();
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

// Function to search node
void search()
{
    int flag = 0;
    int num;

    printf("\nEnter data to search: ");
    scanf("%d", &num);

    temp = header;

    while (temp != NULL)
    {
        if (temp->data == num)
        {
            flag = 1;
            printf("\nSearch successful: %d found", num);
            break;
        }

        temp = temp->link;
    }

    if (flag == 0)
    {
        printf("\nSearch unsuccessful: %d not found", num);
    }
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
