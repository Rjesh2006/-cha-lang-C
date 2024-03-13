
## node deletion demonstration.
```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to delete a node with given key
void deleteNode(struct Node **head_ref, int key) {
    struct Node *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // Free old head
        return;
    }

    // Search for the key to be deleted, keep track of the previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    // Free memory
    free(temp);
}

// Function to print linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Main method
int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data values
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Original Linked List: ");
    printList(head);

    // Delete node with key 2
    deleteNode(&head, 2);

    printf("\nLinked List after deletion of node with key 2: ");
    printList(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
```
** Explanation:**
This program demonstrates the process of deleting a node with a specified key from a linked list.
1. It defines a structure 'Node' to represent a single node in the linked list, with integer data and a pointer to the next node.
2. The 'deleteNode' function deletes a node with a given key from the linked list. It traverses the list, finds the node with the specified key, unlinks it from the list, and frees its memory.
3. The 'printList' function prints the elements of the linked list.
4. In the 'main' function, a linked list with three nodes is created, and the original list is printed.
5. The 'deleteNode' function is called to delete the node with key 2 from the list.
6. The updated linked list is printed, and memory allocated for the nodes is freed to prevent memory leaks.
