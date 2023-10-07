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
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
