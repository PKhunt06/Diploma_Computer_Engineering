// P-5-D Implement insertion of node in sorted linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function prototypes
struct Node* createNode(int data);
void insertSorted(struct Node **head_ref, int data);
void display(struct Node *head);

int main()
{
    struct Node *head = NULL;
    int data;
    int choice;
    int continueInput = 1;

    while (continueInput)
    {
        printf("Enter data to insert into the sorted linked list: ");
        scanf("%d", &data);

        insertSorted(&head, data);

        printf("Do you want to continue adding nodes? ");
        printf("(1 for Yes, 0 for No): ");
        scanf("%d", &continueInput);
    }

    printf("\nSorted linked list:\n");
    display(head);

    return 0;
}

// Function to create a new node
struct Node* createNode(int data)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

// Function to insert a node into a sorted linked list
void insertSorted(struct Node **head_ref, int data)
{
    struct Node *newNode;
    struct Node *current;
    struct Node *previous;

    newNode = createNode(data);

    current = *head_ref;
    previous = NULL;

    // Empty list or insert before first node
    if (*head_ref == NULL || (*head_ref)->data >= data)
    {
        newNode->next = *head_ref;
        *head_ref = newNode;
    }
    else
    {
        // Find correct position
        while (current != NULL && current->data < data)
        {
            previous = current;
            current = current->next;
        }

        newNode->next = current;
        previous->next = newNode;
    }
}

// Function to display linked list
void display(struct Node *head)
{
    struct Node *temp = head;

    if (temp == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    printf("Nodes in the linked list are: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}
