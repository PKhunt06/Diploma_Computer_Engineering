// P-5-G-2 Implement algorithm to delete a node at the end in singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void deleteend();
void display();

int main()
{
    struct node *temp;
    int data;
    int choice;
    int a = 1;

    // Create linked list
    while (a == 1)
    {
        printf("\nEnter the data for node: ");
        scanf("%d", &data);

        temp = (struct node *)malloc(sizeof(struct node));

        temp->data = data;
        temp->link = NULL;

        if (header == NULL)
        {
            header = temp;
        }
        else
        {
            struct node *ptr = header;

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
        printf("\n1. Delete End");
        printf("\n2. Display");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                deleteend();
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

// Delete node from end
void deleteend()
{
    struct node *temp;
    struct node *prev = NULL;

    if (header == NULL)
    {
        printf("\nLinked list is empty.\n");
    }
    else
    {
        temp = header;

        // If there is only one node
        if (temp->link == NULL)
        {
            header = NULL;
            free(temp);
        }
        else
        {
            while (temp->link != NULL)
            {
                prev = temp;
                temp = temp->link;
            }

            prev->link = NULL;
            free(temp);
        }

        printf("\nNode deleted from the end.\n");
    }
}

// Display
void display()
{
    struct node *temp = header;

    printf("\nNodes in the linked list are: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");
}
