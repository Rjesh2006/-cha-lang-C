## Calculate Height of Binary Tree
```cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *left;
    int data;
    struct Node *right;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int findHeight(Node *root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
}

int main() {
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Height of the binary tree is: %d\n", findHeight(root));

    free(root->left->left);
    free(root->left->right);
    free(root->right->left);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
```
**Explanation:**

This program defines a binary tree data structure and implements functions to create nodes and find the height of the binary tree.
It utilizes a Node structure to represent each node in the binary tree, with fields for data, left child, and right child.
The createNode function dynamically allocates memory for a new node and initializes its data and pointers.
The findHeight function recursively calculates the height of the binary tree.
In the main function, a binary tree is created with some sample data.
It then calls the findHeight function to determine the height of the tree and prints the result.
Finally, memory allocated for the tree nodes is freed to avoid memory leaks.
