/*
 * File: 9-print_comb.c
 * Auth: azuka uteh
 */

#include <stdio.h>


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
