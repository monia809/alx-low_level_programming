#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: input one
 *
 * @s2: input two
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int r;

	for (r = 0; s1[r] != '\0' && s2[r] != '\0'; r++)
	{
		if (s1[r] != s2[r])
			return (s1[r] - s2[r]);
	}
	return (0);
}
