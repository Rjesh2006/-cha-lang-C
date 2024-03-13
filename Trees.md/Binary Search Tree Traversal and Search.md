## Binary Search Tree Traversal and Search
```CPP
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    struct node *lp;  // Pointer to the left child
    int val;          // Value of the node
    struct node *rp;  // Pointer to the right child
} node;

// Function to allocate a new node with the given data and NULL left and right pointers
node *newNode(int val) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->val = val;
    newNode->lp = NULL;
    newNode->rp = NULL;
    return newNode;
}

// Function to perform in-order traversal of the binary tree
void traverse(node *root) {
    if (root == NULL) {
        return;
    }
    traverse(root->lp);
    printf("%d ", root->val);
    traverse(root->rp);
}

// Function to perform binary search in the binary tree
bool binarySearch(node *root, int search) {
    if (root == NULL) {
        return false;
    }
    if (search == root->val) {
        return true;
    }
    if (search < root->val) {
        return binarySearch(root->lp, search);
    }
    if (search > root->val) {
        return binarySearch(root->rp, search);
    }
}

int main() {
    // Create a binary search tree
    node *root = newNode(8);
    root->lp = newNode(3);
    root->rp = newNode(10);
    root->lp->lp = newNode(2);
    root->lp->rp = newNode(6);
    root->lp->rp->lp = newNode(4);

    // Perform in-order traversal
    printf("In-order Traversal: ");
    traverse(root);

    // Perform binary search
    int searchKey;
    printf("\nEnter a number to search: ");
    scanf("%d", &searchKey);
    if (binarySearch(root, searchKey)) {
        printf("Number %d exists in the tree.\n", searchKey);
    } else {
        printf("Number %d does not exist in the tree.\n", searchKey);
    }

    // Free the allocated memory to avoid memory leaks
    free(root->lp->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->lp);
    free(root->rp);
    free(root);

    return 0;
}
```


**Expalanaton:**
This program demonstrates the creation and traversal of a binary search tree (BST). It creates a binary search tree with some sample data, performs an in-order traversal of the tree, and allows the user to search for a specific value within the tree using binary search. Finally, it frees the allocated memory to prevent memory leaks.
