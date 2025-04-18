#include <stdio.h>
#include <stdlib.h>

// Define structure for tree node
typedef struct bnode {
    char data;
    struct bnode *left;
    struct bnode *right;
} bnode;

// Inorder Traversal (Left -> Root -> Right)
void inorderPrint(bnode *root) {
    if (root != NULL) {
        inorderPrint(root->left);
        printf("%c ", root->data);
        inorderPrint(root->right);
    }
}
// Function to delete a node in the binary tree
bnode* deleteNode(bnode* root, char key) 
{
    if (root == NULL) 
		return NULL;
    if (root->data == key) 
	{
        free(root);
    return NULL;
    }
    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);
    
return root;
}

// Function to delete only the specified node and not affect others
bnode* deleteSpecificNode(bnode* root, char key) 
{
    if (root == NULL) 
		return NULL;

    if (root->left && root->left->data == key) 
	{
        bnode* temp = root->left;
        if (temp->left) 
			root->left = temp->left; // Promote left child
        else if 
			(temp->right) 
		root->left = temp->right; // Promote right child
        	else root->left = NULL; // No children
        free(temp);
        return root;
    }

    if (root->right && root->right->data == key) 
	{
        bnode* temp = root->right;
        if (temp->left) 
			root->right = temp->left; // Promote left child
        else if (temp->right) 
			root->right = temp->right; // Promote right child
        else 
			root->right = NULL; // No children
        free(temp);
        return root;
    }

    root->left = deleteSpecificNode(root->left, key);
    root->right = deleteSpecificNode(root->right, key);

    return root;
}

int main() {
    bnode *T, *p, *q;
    T = NULL;

    // Creating root node 'A'
    p = (bnode *)malloc(sizeof(bnode));
    p->data = 'A';
    p->left = p->right = NULL;
    T = p;
    q = T;

    // Creating left child 'B'
    p = (bnode *)malloc(sizeof(bnode));
    p->data = 'B';
    p->left = p->right = NULL;
    q->left = p;
    q = p;

    // Creating left child 'D' of B
    p = (bnode *)malloc(sizeof(bnode));
    p->data = 'D';
    p->left = p->right = NULL;
    q->left = p;
    q = p;

    // Creating right child 'G' of D
    p = (bnode *)malloc(sizeof(bnode));
    p->data = 'G';
    p->left = p->right = NULL;
    q->right = p;

    q = T->left;

    // Creating right child 'E' of B
    p = (bnode *)malloc(sizeof(bnode));
    p->data = 'E';
    p->left = p->right = NULL;
    q->right = p;
    q = p;

    // Creating right child 'F' of E
    p = (bnode *)malloc(sizeof(bnode));
    p->data = 'F';
    p->left = p->right = NULL;
    q->right = p;

    // Display inorder traversal before deletion
    printf("Inorder Traversal before deletion: ");
    inorderPrint(T);
    printf("\n");

    // User input for node deletion
    char key;
    printf("Enter the node to delete: ");
    scanf(" %c", &key);
    
    // Delete specified node
    T = deleteSpecificNode(T, key);

    // Display inorder traversal after deletion
    printf("Inorder Traversal after deletion: ");
    inorderPrint(T);
    printf("\n");

    return 0;
}
