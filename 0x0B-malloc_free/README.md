# 0x0B. C - malloc, free.c  Memory allocation

# C - malloc and free

In C programming, `malloc` and `free` are used for dynamic memory allocation and deallocation, respectively. Dynamic memory allocation allows you to allocate memory at runtime, enabling the creation of data structures such as arrays, linked lists, and dynamic strings.

## `malloc` - Memory Allocation

The `malloc` function is used to dynamically allocate memory in C. It stands for "memory allocation." It takes the number of bytes as an argument and returns a pointer to the allocated memory.

The syntax for `malloc` is as follows:

```c
void* malloc(size_t size);
```

Here, `size` represents the number of bytes to allocate. The return type is a `void` pointer (`void*`), which can be cast to any other pointer type.

It's important to check if `malloc` returns a valid pointer before using the allocated memory. If `malloc` fails to allocate memory (e.g., due to insufficient memory), it returns `NULL`.

Example usage of `malloc`:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers;
    int size = 5;

    // Allocate memory for an array of integers
    numbers = (int*)malloc(size * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < size; i++) {
        numbers[i] = i + 1;
        printf("%d ", numbers[i]);
    }

    // Free the allocated memory
    free(numbers);

    return (0);
}
```

In this example, `malloc` is used to allocate memory for an array of integers. The `sizeof(int)` is multiplied by the desired size to ensure enough memory is allocated. The allocated memory is then accessed and used accordingly.

## `free` - Memory Deallocation

The `free` function is used to deallocate dynamically allocated memory in C. It releases the memory previously allocated by `malloc`, `calloc`, or `realloc`.

The syntax for `free` is as follows:

```c
void free(void* ptr);
```

Here, `ptr` is a pointer to the memory block that needs to be deallocated. It should be the same pointer returned by the corresponding allocation function.

Example usage of `free`:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers;
    int size = 5;

    numbers = (int*)malloc(size * sizeof(int));

    // Check if malloc succeeded
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // ...

    // Free the allocated memory
    free(numbers);

    return (0);
}
```

In this example, `free` is used to release the dynamically allocated memory pointed to by `numbers`. After calling `free`, the memory is no longer accessible, and care should be taken not to access the freed memory.

It's important to note that calling `free` on a pointer that was not obtained through a memory allocation function or calling `free` multiple times on the same pointer leads to undefined behavior.

## Conclusion

Dynamic memory allocation using `malloc` and deallocation using `free` are powerful features of the C language. They enable efficient memory management and the creation of flexible data structures. By correctly allocating and freeing memory, you can control the memory usage of your C programs and avoid memory leaks.
