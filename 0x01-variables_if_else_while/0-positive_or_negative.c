#!/bin/bash	

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));  // Initialize random number generator with current time
    int n = rand();     // Generate a random integer and store it in n

    printf("%d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return 0;
}

