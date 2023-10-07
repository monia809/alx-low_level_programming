#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Al
 *
 * @b: Th
 *
 * Return: A
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
