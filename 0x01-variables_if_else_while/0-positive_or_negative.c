#!/bin/bash	

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * initialize a random number generator with current time. strand9time(NULL))
 *
 * Generate a random integer and store it in n.int = n
 *
 */


int main(void)
{
    srand(time(NULL)); 
    int n = rand();    

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
