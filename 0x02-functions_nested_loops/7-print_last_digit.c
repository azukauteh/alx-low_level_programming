#include <limits.h>
#include "main.h"

/**
 * main - print_last_digit - prints the last digit of a number
 *
 * Return: Always 0.
 */

int print_last_digit(int);

int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar('\n');
	
	return (0);
