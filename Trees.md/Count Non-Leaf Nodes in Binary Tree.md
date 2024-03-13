##  Count Non-Leaf Nodes in Binary Tree

```cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int val;
    struct node *rp;
} node;

node *newNode(int val) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->val = val;
    newNode->lp = NULL;
    newNode->rp = NULL;
    return newNode;
}

int countNonLeafNodes(node *root) {
    if (root == NULL) {
        return 0;
    }
    
    if (root->rp == NULL && root->lp == NULL) {
        return 0;
    } else {
        int leftCount = countNonLeafNodes(root->lp);
        int rightCount = countNonLeafNodes(root->rp);
        return 1 + leftCount + rightCount;
    }
}

int main() {
    node *root = newNode(1);
    root->lp = newNode(2);
    root->rp = newNode(3);
    root->lp->lp = newNode(4);
    root->lp->rp = newNode(5);
    root->rp->lp = newNode(6);
    root->rp->rp = newNode(7);

    printf("Number of non-leaf nodes: %d\n", countNonLeafNodes(root));

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
This program calculates and prints the number of non-leaf nodes in a binary tree. It counts the nodes that have at least one child node, excluding the leaf nodes. The binary tree is created with some sample data, and then the countNonLeafNodes function is used to determine the count of non-leaf nodes. Finally, the allocated memory is freed to prevent memory leaks.
