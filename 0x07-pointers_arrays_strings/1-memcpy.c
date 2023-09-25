#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		dest[l] = src[l];

	return (dest);
}
