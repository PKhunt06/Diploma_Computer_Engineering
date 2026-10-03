// P-5-H Implement insertion of node in sorted linked list.

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
void printList(struct Node *node);

int main()
{
    struct Node *head = NULL;
    int n, value;

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        insertSorted(&head, value);
    }

    printf("\nSorted linked list: ");
    printList(head);

    return 0;
}

// Function to create a new node
struct Node* createNode(int data)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

// Function to insert node in sorted linked list
void insertSorted(struct Node **head_ref, int new_data)
{
    struct Node *new_node;
    struct Node *current;

    new_node = createNode(new_data);

    // Empty list or insertion at beginning
    if (*head_ref == NULL ||
        (*head_ref)->data >= new_data)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    current = *head_ref;

    // Find correct position
    while (current->next != NULL &&
           current->next->data < new_data)
    {
        current = current->next;
    }

    // Insert new node
    new_node->next = current->next;
    current->next = new_node;
}

// Function to display linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }

    printf("NULL\n");
}
