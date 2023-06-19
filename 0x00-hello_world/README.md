# Readme 0x00: C - Hello, World

This readme provides an overview of the "Hello, World!" program in the C programming language. It covers the basics of creating and running a simple C program that displays the famous "Hello, World!" message.

## Table of Contents
1. What is the "Hello, World!" Program?
2. Creating a "Hello, World!" Program
3. Compiling and Running the Program
4. Conclusion
5. Resources

## 1. What is the "Hello, World!" Program?

The "Hello, World!" program is a simple and traditional introductory program used to demonstrate the basic syntax and structure of a programming language. It aims to print the message "Hello, World!" on the output console or terminal.

## 2. Creating a "Hello, World!" Program

To create a "Hello, World!" program in C, follow these steps:

1. Open a text editor or an integrated development environment (IDE).
2. Create a new file and save it with a `.c` extension, such as `hello_world.c`.
3. Write the following code in the file:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return (0);
}
```

4. Save the file.

## 3. Compiling and Running the Program

To compile and run the "Hello, World!" program, follow these steps:

1. Open a command prompt or terminal.
2. Navigate to the directory where you saved the `hello_world.c` file.
3. Compile the program using a C compiler (e.g., gcc) with the following command:

```bash
gcc hello_world.c -o hello_world
```

4. If the compilation is successful, an executable file named `hello_world` will be created in the same directory.
5. Run the program by executing the following command:

```bash
./hello_world
```

6. The program will print the message "Hello, World!" on the console or terminal.

## 4. Conclusion

The "Hello, World!" program serves as a fundamental starting point for learning any programming language, including C. By following the steps outlined in this readme, you can create and run your own "Hello, World!" program in C.

## 5. Resources

Here are some resources to further explore C programming and the "Hello, World!" program:
- [C Programming Language - Wikipedia](https://en.wikipedia.org/wiki/C_(programming_language))
- [C Programming - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/index.htm)
- [The C Programming Language (Book) - Brian Kernighan and Dennis Ritchie](https://www.amazon.com/dp/0131103628)
