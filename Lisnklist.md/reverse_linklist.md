```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to reverse a linked list
struct Node* reverseList(struct Node *head) {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev; // new head of the reversed list
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

    // Reverse the linked list
    head = reverseList(head);

    printf("\nReversed Linked List: ");
    printList(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
```

**Explanation:**
It defines a structure Node representing a single node in a linked list. Each node contains an integer data and a pointer next pointing to the next node in the list.

The reverseList function is defined to reverse the linked list. It traverses the list while rearranging the pointers to reverse the order of the nodes.

The printList function is defined to print the elements of the linked list.

In the main function:

Memory is allocated for three nodes: head, second, and third.
Data values are assigned to each node to create a linked list (1 -> 2 -> 3).
The original linked list is printed.
The reverseList function is called to reverse the list.
The reversed linked list is printed, displaying the nodes in reverse order (3 -> 2 -> 1).
