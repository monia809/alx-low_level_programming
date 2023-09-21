#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: copy to
 * @src: copy from
 *
 * @n: input number of char
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	m++;
	}
	return (0);
}
