#include "main.h"
#include <stdlib.h>

/**
 * _strdup - s
 *
 * @str: x
 *
 * Return: nothing
 */

char *_strdup(char *str)
{
	char *copy;
	int m, len = 0;

	if (str == 0)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == 0)
		return (NULL);

	for (m = 0; m < len; m++)
		copy[m] = str[m];
	copy[len] = '\0';

	return (copy);
}
