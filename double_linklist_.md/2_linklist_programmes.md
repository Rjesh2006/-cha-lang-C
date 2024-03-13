## Doubly Linked List Implementation in C++

```cpp
#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    int getSize() {
        return size;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.append(1);
    dll.append(2);
    dll.append(3);
    dll.append(4);
    dll.append(5);

    std::cout << "Doubly Linked List: ";
    dll.display();

    std::cout << "Size of the list: " << dll.getSize() << std::endl;

    return 0;
}
```




**Explanation:**

Node Structure: Each element of the list is represented by a Node. Each node contains an integer value (data), and two pointers: prev, pointing to the previous node, and next, pointing to the next node.

Doubly Linked List Class: This class manages the doubly linked list.

Constructor and Destructor: The constructor initializes the list, setting head, tail, and size to null and zero respectively. The destructor releases memory occupied by nodes.

Append Method: This method adds a new node with the given value to the end of the list. If the list is empty, the new node becomes both head and tail. Otherwise, it's added after the current tail, and tail is updated.

Display Method: Traverses the list from head to tail and prints the data of each node.

getSize Method: Returns the current size of the list.

Main Function:

Creates a DoublyLinkedList object.
Appends some elements to the list.
Displays the contents of the list.
Displays the size of the list.

output:
```cpp
Doubly Linked List: 1 2 3 4 5 
Size of the list: 5
```
