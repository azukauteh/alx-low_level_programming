 - Doubly linked lists

Welcome to the directory for the project **0x17. C - Doubly linked lists**. This project is part of the curriculum in the low-level programming track at Alx Software Engineering. In this project, we explore the concept of doubly linked lists and implement various operations on them using the C programming language.

## Table of Contents

- [What is a Doubly Linked List?](#what-is-a-doubly-linked-list)
- [Project Files](#project-files)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## What is a Doubly Linked List?

A doubly linked list is a linear data structure consisting of a sequence of elements, where each element contains a reference to the next and previous element in the list. This allows traversal in both directions: forward and backward. Compared to singly linked lists, doubly linked lists offer additional flexibility but require more memory to store the extra reference.

In this project, we will be implementing various functions to handle doubly linked lists, including insertion, deletion, searching, and printing operations.

## Project Files

The following files are part of this project:

- **lists.h**: This header file contains the function prototypes for all the functions implemented in this project.

- **0-print_dlistint.c**: This file contains a function that prints all the elements of a doubly linked list.

- **1-dlistint_len.c**: This file contains a function that returns the number of elements in a doubly linked list.

- **2-add_dnodeint.c**: This file contains a function that adds a new node at the beginning of a doubly linked list.

- **3-add_dnodeint_end.c**: This file contains a function that adds a new node at the end of a doubly linked list.

- **4-free_dlistint.c**: This file contains a function that frees the memory allocated for a doubly linked list.

- **5-get_dnodeint.c**: This file contains a function that returns the nth node of a doubly linked list.

- **6-sum_dlistint.c**: This file contains a function that returns the sum of all the data (n) of a doubly linked list.

- **7-insert_dnodeint.c**: This file contains a function that inserts a new node at a given position in a doubly linked list.

- **8-delete_dnodeint.c**: This file contains a function that deletes a node at a given position in a doubly linked list.

## Requirements

- The code is written in C language.
- The code is compiled using **gcc 4.8.4** or later.
- The code does not use global variables.
- The code follows the **Betty** coding style.

## Compilation

To compile the code, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o doubly_linked_lists
```

## Usage

After compiling, run the program using the following command:

```
./doubly_linked_lists
```

The program will execute various test cases on the implemented doubly linked list functions and display the output.

## Contributing

Contributions are welcome! If you want to contribute to this project, please follow these steps:

1. Fork this repository.
2. Create a new branch with a descriptive name (`git checkout -b my_new_branch`).
3. Make your changes and commit them with a descriptive message.
4. Push your branch (`git push origin my_new_branch`).
5. Submit a pull request explaining your changes and why they should be merged.

## License

This project is licensed under the MIT License. See
