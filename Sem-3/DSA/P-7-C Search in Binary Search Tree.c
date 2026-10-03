// P-7-C Implement search operation on Binary Search Tree.

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

struct node* search(struct node* root, int key)
{
    if(root == NULL || root->key == key)
    {
        return root;
    }

    if(key < root->key)
    {
        return search(root->left, key);
    }

    return search(root->right, key);
}

void main()
{
    struct node* root = NULL;
    struct node* result;
    int key, n, i, searchKey;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &key);
        root = insert(root, key);
    }

    printf("Enter element to search: ");
    scanf("%d", &searchKey);

    result = search(root, searchKey);

    if(result != NULL)
    {
        printf("Element %d found in BST.", searchKey);
    }
    else
    {
        printf("Element %d not found in BST.", searchKey);
    }
}
