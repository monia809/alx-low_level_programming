#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 *
 * @n: pointer
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int d;

	for (d = 0; n[d] != '\0'; d++)
	{
		if (n[d] >= 'a' && n[d] <= 'z')
			n[d] = n[d] - 32;
	}
	return (n);
}
