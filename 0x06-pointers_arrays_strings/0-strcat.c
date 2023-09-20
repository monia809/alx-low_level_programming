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
	int x, y;

	for (x = 0; dest[x] != '/0';)
		;
	for (y = 0; src[y] != '/0';)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
