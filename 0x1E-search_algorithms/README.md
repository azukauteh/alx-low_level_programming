# 0x1E. C - Search Algorithms

This directory contains C programs that demonstrate various search algorithms, including linear search, binary search, and interpolation search. These algorithms are fundamental to software development e and are commonly used for searching elements in a given dataset.

## Algorithms Included

1. Linear Search: A simple searching algorithm that sequentially checks each element in a list until the desired element is found or the end of the list is reache.

2. Binary Search : An efficient searching algorithm for sorted arrays, which works by repeatedly dividing in half the portion of the array that could contain the desired element.

3. Interpolation Search : An improved version of binary search that is efficient for uniformly distributed data. It estimates the position of the target element based on its value and the values at the ends of the array.

4. Jump search algorithm:  function that searches for a value in a sorted array of integers using the Jump search algorithm

5. Interpolation search algorithm: function that searches for a value in a sorted array of integers using the Interpolation search algorithm

6. Exponential search algorithm : function that searches for a value in a sorted array of integers using the Exponential search algorithm


## Files

- 0-linear.c : Implementation of linear search algorithm.
- 1-binary.c : Implementation of binary search algorithm.
- 102-interpolation.c : Implementation of interpolation search algorithm.
- 100-jump.c : implementation of Jump search algorithm
- 103-exponential.c : implementation of  Exponential search algorithm
- **main.c : Contains sample usage of the implemented search algorithms.

## How to Compile and Run

To compile the program, use a C compiler such as `gcc`:


```bash
 gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear

```

To run the compiled program:

```bash
./0-linear.c
```

## Usage

Edit the `main.c` file to include the dataset you want to search in and the element you want to search for. Modify the array `arr` and the target element `target` accordingly. Then compile and run the program to observe the results.

