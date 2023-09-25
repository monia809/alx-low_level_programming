#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 *@s: first value
 *@accept: second value
 *
 * Return: char with result
 */

char *_strpbrk(char *s, char *accept)
{
	int h = 0;

	while (*s)
	{
		while (accept[h] != '\0')
		{
			if (*s == accept[h])
				return (s);
			h++;
		}
		h = 0;
		s++;
	}
	return ('\0');
}
