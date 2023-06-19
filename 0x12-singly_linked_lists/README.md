# 0x12. C - Singly linked lists

This README provides an overview of singly linked lists in C programming. Singly linked lists are a fundamental data structure used to store and manipulate a collection of elements in a linear manner. Each element in the list, called a node, contains a value and a pointer to the next node.

## Structure of a Singly Linked List

A singly linked list is composed of nodes, where each node contains two components:

1. Data: The value or information stored in the node.
2. Next Pointer: A pointer that points to the next node in the list.

The last node in the list points to NULL, indicating the end of the list.

```c
struct Node {
    int data;
    struct Node* next;
};
```

In the above structure, `data` represents the value stored in the node, and `next` is a pointer to the next node in the list.

## Basic Operations on Singly Linked Lists

### 1. Insertion

Insertion in a singly linked list involves creating a new node and linking it appropriately to the existing nodes in the list.

- Insertion at the beginning:
  - Create a new node with the given value.
  - Set the `next` pointer of the new node to the current head of the list.
  - Update the head pointer to point to the new node.

- Insertion at the end:
  - Create a new node with the given value.
  - Traverse the list until the last node is reached.
  - Set the `next` pointer of the last node to the new node.

- Insertion at a specific position:
  - Create a new node with the given value.
  - Traverse the list to the node before the desired position.
  - Link the new node to the next node and update the `next` pointer of the previous node to the new node.

### 2. Deletion

Deletion in a singly linked list involves removing a node from the list.

- Deletion from the beginning:
  - Update the head pointer to point to the next node.
  - Free the memory allocated to the deleted node.

- Deletion from the end:
  - Traverse the list until the second-to-last node is reached.
  - Update the `next` pointer of the second-to-last node to NULL.
  - Free the memory allocated to the last node.

- Deletion from a specific position:
  - Traverse the list to the node before the desired position.
  - Update the `next` pointer of the previous node to skip the node to be deleted.
  - Free the memory allocated to the deleted node.

### 3. Traversal

Traversal involves visiting each node of the linked list in order to perform some operation on its data.

- Start from the head node.
- Iterate through each node by following the `next` pointer until reaching NULL.
- Perform the desired operation on each node's data.

## Advantages and Limitations of Singly Linked Lists

Advantages:
- Dynamic Size: Singly linked lists can grow or shrink dynamically as elements are inserted or deleted.
- Efficient Insertion and Deletion: Insertion and deletion operations can be performed efficiently by adjusting the pointers.
- Flexibility: Nodes in a linked list can be easily rearranged.

Limitations:
- Random Access: Unlike arrays, singly linked lists do not support direct access to elements by index. Traversal is required to access a specific node.
- Additional Memory Overhead: Each node in the list requires additional memory to store the next pointer.
- Forward Traversal Only: Singly linked lists allow forward traversal only, as each node contains a pointer to the next node.

## Conclusion

Singly linked lists are an important data structure in C programming that allow for efficient
