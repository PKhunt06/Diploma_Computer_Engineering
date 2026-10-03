// P-7-B Write a source code to implement pre-order, in-order and post-order traversal in Binary Search Tree.

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

void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void preorder(struct node* root)
{
    if(root != NULL)
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
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

    printf("\nIn-order Traversal: ");
    inorder(root);

    printf("\nPre-order Traversal: ");
    preorder(root);

    printf("\nPost-order Traversal: ");
    postorder(root);
}
