#0x0C. C - More malloc, free


This README provides additional information and examples on using `malloc` and `free` for dynamic memory allocation and deallocation in C programming.

## Allocating Arrays and Structures

`malloc` can be used to allocate memory for arrays and structures. To allocate memory for an array, you need to specify the total number of elements multiplied by the size of each element using the `sizeof` operator.

Example:

```c
int* numbers;
int size = 10;

numbers = (int*)malloc(size * sizeof(int));
```

In this example, `malloc` is used to allocate memory for an array of 10 integers. The `sizeof(int)` gives the size of an integer in bytes, and it is multiplied by the number of elements (`size`) to allocate the appropriate amount of memory.

Similarly, you can allocate memory for a structure using `malloc`:

```c
struct Person {
    char name[50];
    int age;
};

struct Person* person;

person = (struct Person*)malloc(sizeof(struct Person));
```

In this case, `malloc` is used to allocate memory for a `struct Person`. The `sizeof(struct Person)` calculates the size of the structure, including its members, and allocates the appropriate memory.

## Error Handling

When using `malloc`, it is essential to check if the memory allocation was successful by verifying if the returned pointer is `NULL`. If `malloc` fails to allocate memory (e.g., due to insufficient memory), it returns `NULL`.

Example:

```c
int* numbers;
int size = 10;

numbers = (int*)malloc(size * sizeof(int));

if (numbers == NULL) {
    printf("Memory allocation failed\n");

    return 1;
}
```

In this example, if the `malloc` call fails and `numbers` is `NULL`, an error message is printed, and the program can handle the failure accordingly.

## Reallocating Memory

The `realloc` function is used to resize previously allocated memory. It takes a pointer to the original memory block, the new size in bytes, and returns a pointer to the resized memory block.

Example:

```c
int* numbers;
int size = 5;

numbers = (int*)malloc(size * sizeof(int));

// ... use the allocated memory ...

// Reallocate memory for a larger array
size = 10;
numbers = (int*)realloc(numbers, size * sizeof(int));
```

In this example, `realloc` is used to resize the previously allocated memory block for `numbers`. The `size` variable is updated to the new size, and the pointer returned by `realloc` is assigned back to `numbers`.

It's important to note that `realloc` may return a new pointer to the resized block of memory. Therefore, it's recommended to assign the result to a temporary pointer before assigning it back to the original pointer. This way, if `realloc` fails and returns `NULL`, the original pointer remains unchanged, preventing a potential memory leak.

## Freeing Memory

To deallocate dynamically allocated memory, use the `free` function. It takes a pointer to the memory block that needs to be deallocated and releases the memory for reuse.

Example:

```c
int* numbers;

numbers = (int*)malloc(5 * sizeof(int));

// ... use the allocated memory ...

// Free the allocated memory
free(numbers);
```

In this example, `free` is used to release the memory allocated for `numbers`. After calling `free`, the memory is no longer accessible.

It's important to note that accessing memory after it has been freed leads to undefined behavior. Therefore, you should avoid using the memory block once it has been freed.
