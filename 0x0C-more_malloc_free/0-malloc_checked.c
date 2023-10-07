#include "main.h"

/**
 * malloc_checked - a
 *
 * @b: si
 *
 * Return: poin
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
