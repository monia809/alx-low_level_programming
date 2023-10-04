#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat
 *
 * @size: s
 *
 * @c: i
 *
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int m;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);

	for (m = 0; m < size; m++)
		array[m] = c;

	return (array);
}
