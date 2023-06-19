#0x09. C - Static libraries


This README provides an overview of creating and using static libraries in the C programming language.

## What is a static library?

A static library, also known as an archive, is a collection of object files that are combined into a single file. It contains pre-compiled code that can be reused across multiple programs without recompiling the code each time. The library file has the extension ".a" on Unix-like systems (e.g., libexample.a).

## Creating a static library

To create a static library, you need to follow these steps:

1. Write the source code files: Create the necessary C source code files (e.g., example.c) that contain the functions you want to include in the library.

2. Compile the source code files: Compile the source code files into object files (e.g., example.o) using a C compiler. The command typically looks like this:

   ```shell
   gcc -c example.c
   ```

3. Create the library: Use the `ar` (archive) command to create the library file from the object files. The command looks like this:

   ```shell
   ar rcs libexample.a example.o
   ```

   The `r` option means to insert or replace files, the `c` option creates the library if it doesn't exist, and the `s` option adds an index to the library for faster symbol lookup.

4. Verify the library: You can check the contents of the library using the `ar` command with the `t` option:

   ```shell
   ar t libexample.a
   ```

   This command lists the object files included in the library.

## Using a static library

To use a static library in your C program, follow these steps:

1. Include the library header file: In your C source code file (e.g., main.c), include the header file that declares the functions provided by the library. The inclusion typically looks like this:

   ```c
   #include "example.h"
   ```

2. Compile your program: Compile your program and link it with the static library. The command typically looks like this:

   ```shell
   gcc -o myprogram main.c -L/path/to/library -lexample
   ```

   The `-L` option specifies the directory where the library is located, and the `-l` option specifies the library name without the "lib" prefix and ".a" extension.

3. Run your program: Execute the compiled program as usual.

## Additional notes

- Make sure to distribute the library file along with your program if you plan to distribute it to others.

- If you make changes to the library's source code, you need to recompile and recreate the library to include the updated code.

- Static libraries are linked at compile-time, so any updates or bug fixes to the library require recompiling and relinking the program.

- Using static libraries can help reduce the size of the final executable and improve the program's startup time.

- Static libraries are platform-specific, meaning you may need to recompile the library for different operating systems or architectures.

## Conclusion

Static libraries provide a convenient way to reuse code across multiple programs without recompiling the code each time. By following the steps outlined in this README, you can create and use static libraries in your C projects effectively.
