## Node Class
The Node class represents each element in the linked list. It consists of two parts:

Data: The actual value stored in the node.
Pointer to the Next Node: This pointer links each node to the next node in the sequence.
Here's how it's defined:

```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};
```

data: Holds the value of the node.
next: Points to the next node in the list. Initialized to nullptr by default.
The constructor initializes the data field with the given value and sets the next pointer to nullptr.




## LinkedList Class
The LinkedList class manages the linked list. It maintains a reference to the head of the list and provides methods for adding elements, displaying the list, and deallocating memory.

```cpp
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(int value);
    void display();
    ~LinkedList();
};
```

head: Points to the first node in the linked list.
The constructor initializes head to nullptr, indicating an empty list.
The class provides methods for appending elements (append), displaying the list contents (display), and deallocating memory (~LinkedList destructor).





## Append Method
The append method adds a new node with the given value to the end of the list. It handles both the case of an empty list and a non-empty list.

```cpp
void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}
```
It creates a new node with the given value.
If the list is empty (head is nullptr), it sets the head to the new node and returns.
If the list is not empty, it traverses the list until it finds the last node and attaches the new node to it.





## Display Method
The display method traverses the list from the head to the end, printing the value of each node.

```cpp
void LinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
```

It starts from the head and iterates through each node by following the next pointers until it reaches the end (when current becomes nullptr).
During each iteration, it prints the value of the current node (current->data).




## Destructor
The destructor (~LinkedList) deallocates the memory allocated for each node in the list to prevent memory leaks.

```cpp
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}
```

It starts from the head and iterates through each node.
For each node, it stores the current node in a temporary variable (temp), moves to the next node, and then deletes the current node (temp).
This process continues until all nodes are deleted, ensuring that memory is properly deallocated.





## Main Function
In the main function, you can see how the linked list is used:

```cpp
int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display(); // Output: 1 2 3

    return 0;
}
```

It creates an instance of the LinkedList class (list).
It appends three elements (1, 2, and 3) to the list.
It displays the contents of the list using the display method.
