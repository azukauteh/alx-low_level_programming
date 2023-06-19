# 0x15. C - File I/O


This README provides an overview of file input/output (I/O) in C programming. File I/O operations allow reading data from files and writing data to files, enabling data persistence and interaction with external files.

## File Pointers

In C, file operations are performed using file pointers. A file pointer is a data structure that keeps track of the current position and other information about a file. It serves as a handle for performing file I/O operations.

To work with files, you need to declare a file pointer using the `FILE` type from the `stdio.h` header.

```c
#include <stdio.h>

int main() {
    FILE* filePtr;

    // File I/O operations

    return (0);
}
```

In this example, a file pointer `filePtr` is declared. It will be used to perform file I/O operations.

## Opening a File

To open a file for reading or writing, you can use the `fopen` function, which takes the file name and mode as arguments.

```c
FILE* fopen(const char* filename, const char* mode);
```

The `filename` parameter is the name of the file to be opened, and the `mode` parameter specifies the mode of file access (e.g., read, write, append).

Example: Opening a File for Reading

```c
#include <stdio.h>

int main() {
    FILE* filePtr;
    filePtr = fopen("data.txt", "r");

    if (filePtr == NULL) {
        printf("Failed to open the file.\n");
        return (1);
    }

    // File operations

    fclose(filePtr);

    return (0);
}
```

In this example, the file `"data.txt"` is opened in read mode (`"r"`) using the `fopen` function. If the file fails to open (i.e., `filePtr` is `NULL`), an error message is printed. Otherwise, the file can be accessed for further operations.

## Reading from a File

Once a file is opened, you can read data from it using functions such as `fscanf`, `fgets`, or `fread`.

Example: Reading from a File using `fgets`

```c
#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    FILE* filePtr;
    char buffer[MAX_LENGTH];

    filePtr = fopen("data.txt", "r");

    if (filePtr == NULL) {
        printf("Failed to open the file.\n");
        return (1);
    }

    while (fgets(buffer, MAX_LENGTH, filePtr) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePtr);

    return (0);
}
```

In this example, the file `"data.txt"` is opened in read mode. The `fgets` function is used to read each line from the file and store it in the `buffer` array. The read line is then printed using `printf`.

## Writing to a File

To write data to a file, you can use functions such as `fprintf`, `fputs`, or `fwrite`.

Example: Writing to a File using `fprintf`

```c
#include <stdio.h>

int main() {
    FILE* filePtr;

    filePtr = fopen("output.txt", "w");

    if (filePtr == NULL) {
        printf("Failed to open the file.\n");
        return (1);
    }

    fprintf(filePtr, "Hello, world!\n");
    fprintf(filePtr, "This is a sample file.\n");

    fclose(filePtr);

    return (0);
}
```

In this example, the file `"output.txt"` is opened in
