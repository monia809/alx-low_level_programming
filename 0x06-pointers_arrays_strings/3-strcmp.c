#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: input string
 * @src: input string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; dest[x] != '\0' && src[x] != '\0'; x++)
	{
		if (dest[x] != src[x])
			return (dest[x] - src[x]);
	}
	return (0);
}
