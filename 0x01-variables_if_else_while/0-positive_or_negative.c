#!/bin/bash	
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // seed the random number generator

    int n = std::rand(); // generate a random number

    std::cout << "The number " << n << " is ";

    if (n > 0) {
        std::cout << "positive";
    } else if (n < 0) {
        std::cout << "negative";
    } else {
        std::cout << "zero";
    }

    std::cout << std::endl;

    return 0;
}

