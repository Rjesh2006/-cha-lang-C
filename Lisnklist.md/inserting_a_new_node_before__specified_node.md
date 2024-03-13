## Inserting a new node before a specified node

```cpp
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void add(int x,struct node *head,struct node *add){
    
     while (head->next != NULL) { /* head != NULL will lead to segmentaion fault The issue causing a segmentation fault is that after the while loop, when head becomes NULL, you're attempting to access head->next, which leads to dereferencing a NULL pointer, resulting in undefined behavior and, in this case, a segmentation fault.*/
        head = head->next; // Move to the next node
    }
    head->next = add;
    add -> data = x;
    add -> next = NULL;
    
}

void view(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next; 
    }
    printf("\n");
}

int main() {
    // initializing nodes :
    struct node head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *forth;

    // allocating memory :
    first = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    forth = (struct node*) malloc(sizeof(struct node));

    // data assign 
    head.data = 0; // creating a dummy 
    head.next = first;

    first->data = 10; // x->y = (*x).y
    first->next = second; 

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;
// travesing and addng node at en of list 
    view(head.next);
    int data4;
    printf("\nTYPE DATA TO ADD : \n");
    scanf("%d",&data4);
    add(data4,head.next,forth);
    view(head.next);
    

    // Free allocated memory
    free(first);
    free(second);
    free(third);
    free(forth);
    
    
    first = NULL;
    second = NULL;
    third = NULL;
    forth = NULL;
    head.next = NULL;
    return 0;
}
```

**Explanation:**
This code allows you to insert a new node before a specified node in the linked list. The addNodeBefore function takes the head of the linked list, the data for the new node, and the data of the target node before which the new node should be inserted. It then traverses the list to find the target node, allocates memory for the new node, and adjusts the pointers to insert the new node before the target node. If the target node is not found, it prints a message indicating that the target node is not found.


