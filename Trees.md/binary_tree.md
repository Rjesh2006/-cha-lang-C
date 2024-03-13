

## Binary Tree Creation and Deallocation:
```cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int val;
    struct node *rp;
} node;

// newNode() allocates a new node with the given data and NULL left and right pointers
node *newNode(int val) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->val = val;
    newNode->lp = NULL;
    newNode->rp = NULL;
    return newNode;
}

int main() {
    node *root = newNode(1);

    // Creating the binary tree
    root->lp = newNode(2);
    root->rp = newNode(3);
    root->lp->lp = newNode(4);
    root->lp->rp = newNode(5);
    root->rp->lp = newNode(6);
    root->rp->rp = newNode(7);

    // Freeing the allocated memory to avoid memory leaks
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);

    return 0;
}
```
**Explantaion:**
This program demonstrates the creation of a binary tree structure using dynamically allocated memory. It defines a structure node to represent each node in the tree, with left (lp) and right (rp) pointers. The newNode() function allocates memory for a new node with the specified value and initializes its pointers to NULL.

In the main() function:

A root node is created with a value of 1.
Child nodes are added to the root, forming a binary tree.
Memory allocated for each node is freed to prevent memory leaks.
