# 0x1A. C - Hash Tables

Thisdirectory contains solutions for the "0x1A. C - Hash Tables" project assignments. The project focuses on implementing hash tables in the C programming language. Hash tables are data structures that allow efficient retrieval and storage of key-value pairs.

## Table of Contents

- [Introduction](#introduction)
- [Requirements](#requirements)
- [Usage](#usage)
- [Files](#files)
- [Author](#author)

## Introduction

The "0x1A. C - Hash Tables" project aims to provide a comprehensive understanding of hash tables and their implementation in C. The project assignments focus on building a hash table data structure from scratch, using various techniques such as collision resolution, key hashing, and dynamic resizing.

The main objectives of this project are:

- Understand the concept of hash tables and their advantages.
- Implement basic hash table operations, including insertion, retrieval, and deletion.
- Handle collisions using separate chaining.
- Optimize hash table performance by resizing and rehashing.
- Analyze the time complexity of hash table operations.

## Requirements

To compile and run the code in this directory, ensure that you have the following installed:

- GCC (GNU Compiler Collection)

- Linux-based operating system (recommended)


## Usage

To use the hash table implementation provided in this repository, follow these steps:

1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/azukauteh/alx-low_level_programming.gi
   ```

2. Navigate to the project directory:

   ```
   cd 0x1A-hash_tables
   ```

3. Compile the C files using GCC:

   ```
   -Wall -Werror -Wextra -pedantic -std=gnu89
   ```

4. Run the compiled program:

   ```
   ./hashtable
   ```

Note: You can modify the provided example code or create your own test cases to experiment with the hash table implementation.

## Files

The repository contains the following files:

- `hash_tables.h`: Header file containing function prototypes and struct definitions for hash table operations.
- `0-hash_table_create.c`: Function to create a new hash table.
- `1-djb2.c`: Hashing function implementation using the djb2 algorithm.
- `2-key_index.c`: Function to determine the index of a key in a hash table.
- `3-hash_table_set.c`: Function to add an element to a hash table.
- `4-hash_table_get.c`: Function to retrieve an element from a hash table.
- `5-hash_table_print.c`: Function to print the contents of a hash table.
- `6-hash_table_delete.c`: Function to delete a hash table and free allocated memory.
- `100-sorted_hash_table.c`: Additional functions to support sorted hash tables (optional).

## Author

This project was implemented by Azuka Uteh  as a part of the curriculum  alx_africa sofware engineering.

