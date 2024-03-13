checks if it is a strict binary tree. 

```cpp

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a structure for a binary tree node
typedef struct node {
    struct node *lp;   // Pointer to the left child
    int data;          // Data stored in the node
    struct node *rp;   // Pointer to the right child
} node;

// Function to create a new node with the given value
node *newnode(int val) {
    // Allocate memory for the new node
    node *addnode = (node *)malloc(sizeof(node));
    addnode->lp = NULL; // Initialize left child pointer to NULL
    addnode->rp = NULL; // Initialize right child pointer to NULL
    addnode->data = val; // Set the data of the node
    return addnode;     // Return the newly created node
}

// Function to perform an in-order traversal of the binary tree and print the nodes
void view(node *root) {
    if (root == NULL) {
        return; // Base case: if the node is NULL, return
    }
    view(root->lp);         // Recursively traverse the left subtree
    printf("%d ", root->data); // Print the data of the current node
    view(root->rp);         // Recursively traverse the right subtree
}

// Function to check if the binary tree is a strict binary tree
bool sbt(node *root) {
    if (root == NULL) {
        return true; // Base case: if the node is NULL, return true
    }
    
    if (root->lp == NULL && root->rp == NULL) {
        return true; // Base case: if the node is a leaf (no children), return true
    }
    
    if (root->lp != NULL && root->rp != NULL) {
        return (sbt(root->lp) && sbt(root->rp)); // Recursive case: check left and right subtrees
    }
    else {
        return false; // If one child is present and the other is not, return false
    }
}

int main() {
    // Create the root node with value 1
    node *root = newnode(1);
    /* following is the tree after above statement
        1
       /  \
     NULL NULL
    */
    
    // Add left and right children to the root node
    root->lp = newnode(2);
    root->rp = newnode(3);
    /* 2 and 3 become left and right children of 1
            1
           / \
          2   3
         / \ / \
    NULL NULL NULL NULL
    */
   
    // Add left children to nodes 2 and 3
    root->lp->lp = newnode(4);
    root->lp->rp = newnode(5);
    /* 4 and 5 becomes left child of 2 
         1
        / \
       2   3
      /  \ / \
     4   5  NULL NULL
     /   \
    NULL NULL
    */
   
    // Add left and right children to nodes 4 and 5
    root->rp->lp = newnode(6);
    root->rp->rp = newnode(7);
    /* 6 and 7 becomes left child of 3
         1
        / \
       2   3
      /  \ /  \
     4   5 6  7
     /   \  /   \
    NULL NULL NULL NULL
    */

    // Perform in-order traversal and print the nodes
    view(root);
    printf("\n");

    // Check if the tree is a strict binary tree and print the result
    if (sbt(root)) {
        printf("IT IS A STRICTLY BINARY TREE");
    } else {
        printf("IT IS NOT A STRICTLY BINARY TREE");
    }

    // Free the allocated memory to avoid memory leaks
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


**Explanation:**

The program defines a structure node to represent a node in a binary tree. Each node has a data field and pointers to its left and right children.
The newnode function creates a new node with the given value.
The view function performs an in-order traversal of the binary tree and prints the nodes.
The sbt function checks if the binary tree is a strict binary tree, meaning each node has either 0 or 2 children.
In the main function:
It creates a binary tree.
Performs an in-order traversal and prints the nodes.
Checks if the tree is a strict binary tree and prints the result.
Frees the allocated memory to avoid memory leaks.
