#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	
	if (*s == c)
	{
		return (s);
	}
        return (0);
}
