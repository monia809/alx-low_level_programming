#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 *
 * @s: input
 * @c: input
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int o;

	for (o = 0; s[o] >= '\0'; o++)
	{
		if (s[o] == c)
			return (s + o);
	}

	return (NULL);
}
