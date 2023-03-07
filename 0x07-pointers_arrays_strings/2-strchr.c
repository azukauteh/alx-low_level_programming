#include "main.h"

/**
 * _strchr - check the code
 * @s: pointer to char
 * @c: char params to found
 * Return: 0
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
