# Readme 0x18: C - Dynamic Libraries

This readme provides an overview of dynamic libraries in the C programming language. It covers the basics of dynamic libraries, their advantages, and how to create and use them in C programs.

## Table of Contents
1. What are Dynamic Libraries?
2. Advantages of Dynamic Libraries
3. Creating Dynamic Libraries
4. Using Dynamic Libraries
5. Compiling with Dynamic Libraries
6. Conclusion
7. Resources

## 1. What are Dynamic Libraries?

Dynamic libraries, also known as shared libraries, are pre-compiled binary files that contain reusable code and data. They provide a way to share common functionality across multiple programs without having to include the same code in each program. Dynamic libraries are loaded at runtime and linked with the program during execution.

## 2. Advantages of Dynamic Libraries

Using dynamic libraries offers several advantages:
- Code Reusability: Dynamic libraries promote code reuse, allowing multiple programs to share the same library and reducing duplication of code.
- Efficient Memory Usage: Dynamic libraries are loaded into memory only once and shared by multiple programs, saving memory resources.
- Easy Updates: If a bug is found or an improvement is made in a dynamic library, updating the library will automatically apply the changes to all programs using it.
- Runtime Flexibility: Dynamic libraries can be loaded and unloaded dynamically, allowing for dynamic behavior and modularity in programs.

## 3. Creating Dynamic Libraries

To create a dynamic library in C, you'll typically follow these steps:
1. Write the code for the library's functions in separate source files (e.g., `library.c` and `library.h`).
2. Compile the source files into an object file using the `-fPIC` (Position Independent Code) flag:\
   `gcc -c -fPIC library.c -o library.o`
3. Create the dynamic library from the object file using the `-shared` flag:\
   `gcc -shared library.o -o liblibrary.so`

## 4. Using Dynamic Libraries

To use a dynamic library in a C program, follow these steps:
1. Include the library's header file in your source file:\
   `#include <library.h>`
2. Link the program with the dynamic library during compilation using the `-l` flag:\
   `gcc program.c -o program -L/path/to/library -llibrary`

## 5. Compiling with Dynamic Libraries

When compiling a program that uses dynamic libraries, you may need to provide additional information to the compiler:
- Library Search Path: Use the `-L` flag followed by the directory path where the dynamic library is located.
- Library Linking: Use the `-l` flag followed by the library name (without the `lib` prefix and file extension).

## 6. Conclusion

Dynamic libraries are powerful tools for code reuse and modular programming in C. They provide flexibility, efficiency, and easy updates. By creating and utilizing dynamic libraries, you can improve your development workflow and create more maintainable and scalable applications.

## 7. Resources

Here are some resources to further explore dynamic libraries in C:
- [Dynamic Linking in Linux](https://www.akkadia.org/drepper/dsohowto.pdf)
- [Shared Libraries with GCC on Linux](https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html)
- [Dynamic Libraries - Wikipedia](https://en.wikipedia.org/wiki/Library_(computing)#Dynamic_libraries)
