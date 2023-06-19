#0x0F. C - Function pointers


This README provides an overview of function pointers in C programming. Function pointers allow you to store the address of functions and invoke them dynamically at runtime. They provide flexibility and enable advanced programming techniques such as callbacks, function tables, and dynamic function invocation.

## Declaring Function Pointers

To declare a function pointer, you need to specify the function's return type and parameter types. The syntax for declaring a function pointer is as follows:

```c
return_type (*pointer_name)(parameter_types);
```

Here, `return_type` is the return type of the function, `pointer_name` is the name of the function pointer, and `parameter_types` are the types of the function's parameters.

Example:

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*sum)(int, int);

    sum = &add;  // Assigning the address of add() function to sum

    int result = sum(4, 5);  // Calling the add() function through sum

    printf("Result: %d\n", result);

    return (0);
}
```

In this example, a function pointer `sum` is declared to point to a function that takes two `int` parameters and returns an `int`. The address of the `add` function is assigned to `sum` using the `&` operator. The `sum` pointer is then invoked as a function, passing arguments and obtaining the result.

## Using Function Pointers

Function pointers can be used to call functions dynamically based on runtime conditions or to provide callbacks to other functions. They enable the decoupling of function invocations from their implementation, allowing for more flexibility and modularity in the code.

Example: Using a Function Pointer for a Callback

```c
#include <stdio.h>

void printMessage(const char* message) {
    printf("Message: %s\n", message);
}

void processMessage(const char* message, void (*callback)(const char*)) {
    printf("Processing message...\n");
    callback(message);
}

int main() {
    processMessage("Hello, world!", &printMessage);

    return (0);
}
```

In this example, the `processMessage` function takes a message and a function pointer as arguments. It processes the message and calls the provided callback function, passing the message as an argument. The `printMessage` function serves as the callback, and it is invoked with the message received by `processMessage`.

## Function Pointers and qsort()

The `qsort()` function in C's standard library is a practical example of using function pointers. It sorts an array of elements using a user-defined comparison function.

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    return num1 - num2;
}

int main() {
    int numbers[] = {4, 2, 8, 5, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return (0);
}
```

In this example, the `compare` function is a user-defined comparison function that takes two `const void*` arguments. It performs the comparison between two integers and returns a negative, zero, or positive value based on their relative order. The `qsort()` function is then used to sort the `numbers
