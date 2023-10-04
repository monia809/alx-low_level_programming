#include "main.h"
#include <stdlib.h>

/**
 * str_concat - fm
 *
 * @s1: f
 *
 * @s2: m
 *
 * Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int f, m, k, limit;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (f = 0; s1[f] != '\0'; f++)
		;

	for (m = 0; s2[m] != '\0'; m++)
		;

	strout = malloc(sizeof(char) * (f + m + 1));

	if (strout == 0)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < f; k++)
		strout[k] = s1[k];

	limit = m;
	for (m = 0; m <= limit; k++, m++)
		strout[k] = s2[m];

	return (strout);
}
