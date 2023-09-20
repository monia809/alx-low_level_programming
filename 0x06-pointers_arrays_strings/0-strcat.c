#include "main.h"

/*
 * _strcat - sequences two strings
 *
 * @dest: output dest
 *
 * @src: input source
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '/0';)
		;
	for (j = 0; src[j] != '/0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
