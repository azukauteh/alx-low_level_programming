#0x0A. C - argc, argv


In C programming, `argc` and `argv` are command-line arguments used to pass information to a program when it is executed. `argc` stands for "argument count," and `argv` stands for "argument vector." They are commonly used to provide input parameters or options to a program from the command line.

## `argc` - Argument Count

`argc` is an integer variable that represents the number of command-line arguments passed to the program, including the program name itself. It specifies the total count of items stored in the `argv` array.

## `argv` - Argument Vector

`argv` is an array of strings (character pointers) that stores the actual command-line arguments passed to the program. The first element (`argv[0]`) is always the name of the program itself, and the subsequent elements contain the additional arguments provided.

## Usage and Example

Here's a basic example that demonstrates how to use `argc` and `argv` in a C program:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);

    printf("Program name: %s\n", argv[0]);

    printf("Arguments:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return (0);
}
```

In this example, the program prints the total number of arguments (`argc`), the program name (`argv[0]`), and each individual argument (`argv[i]`) on separate lines.

Suppose we compile the program and run it with the following command:

```shell
gcc program.c -o myprogram
./myprogram arg1 arg2 arg3
```

The output would be:

```
Number of arguments: 4
Program name: ./myprogram
Arguments:
arg1
arg2
arg3
```

As shown, `argc` would be 4 because there are four arguments passed (including the program name), and `argv` contains the program name and the three arguments specified.

## Conclusion

Using `argc` and `argv` allows C programs to receive command-line arguments, providing flexibility and customization when executing programs. By understanding and utilizing these variables, you can enhance the functionality and interactivity of your C programs
