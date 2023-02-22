#include <unistd.h>

/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */

int main ( void)
{

int _putchar(char c)
{
	return (write(1, &c, 1));
}

}
}
