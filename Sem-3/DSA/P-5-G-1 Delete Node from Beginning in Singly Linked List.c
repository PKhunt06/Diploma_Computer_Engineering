// P-5-G-1 Implement algorithm to delete a node from beginning in singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void deletefront();
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
        printf("\n1. Delete Front");
        printf("\n2. Display");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                deletefront();
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

// Delete node from beginning
void deletefront()
{
    struct node *temp;

    if (header == NULL)
    {
        printf("\nLinked list is empty.\n");
    }
    else
    {
        temp = header;
        header = temp->link;

        free(temp);

        printf("\nNode deleted from the front.\n");
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
