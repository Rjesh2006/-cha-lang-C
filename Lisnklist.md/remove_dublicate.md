
## remve dublicate node:
```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to remove duplicates from a sorted linked list
void removeDuplicates(struct Node *head) {
    struct Node *current = head;
    struct Node *nextNode;

    // Traverse the list until the end is reached
    while (current != NULL && current->next != NULL) {
        // If the data of current and next nodes are the same, delete the next node
        if (current->data == current->next->data) {
            nextNode = current->next->next;
            free(current->next);
            current->next = nextNode;
        } else {
            current = current->next;
        }
    }
}

// Function to print the linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;

    // Allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Assign data values
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = NULL;

    printf("Original Linked List: ");
    printList(head);

    // Remove duplicates from the linked list
    removeDuplicates(head);

    printf("\nLinked List after removing duplicates: ");
    printList(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
```
**Expalantaion:**
It defines a structure Node representing a single node in a linked list. Each node contains an integer data and a pointer next pointing to the next node in the list.

The removeDuplicates function is defined to remove duplicate elements from the linked list. It traverses the list and checks for consecutive duplicate elements. If duplicates are found, it removes the duplicates by adjusting the pointers and freeing the memory of the duplicate nodes.

The printList function is defined to print the elements of the linked list.

In the main function:

Memory is allocated for four nodes: head, second, third, and fourth.
Data values are assigned to each node to create a sorted linked list with duplicates (1 -> 2 -> 2 -> 3).
The original linked list is printed.
The removeDuplicates function is called to remove duplicates from the list.
The updated linked list is printed, showing the removal of duplicates (1 -> 2 -> 3).
