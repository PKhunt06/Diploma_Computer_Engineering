// P-7-A Implement construction of binarysearch tree.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node* newNode(int key)
{
    struct node* temp;

    temp = (struct node*)malloc(sizeof(struct node));

    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

struct node* insert(struct node* root, int key)
{
    if(root == NULL)
    {
        return newNode(key);
    }

    if(key < root->key)
    {
        root->left = insert(root->left, key);
    }
    else if(key > root->key)
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void main()
{
    struct node* root = NULL;
    int key, n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &key);
        root = insert(root, key);
    }

    printf("Binary Search Tree constructed successfully.");
}
