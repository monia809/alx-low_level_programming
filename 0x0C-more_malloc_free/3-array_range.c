#include "main.h"
#include <stdlib.h>

/**
 * array_range - C
 *
 * @min: T
 *
 * @max: T
 *
 * Return: I
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == 0)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
