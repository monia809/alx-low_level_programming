#include "function_pointers.h"

/**
 * array_iterator - executes
 *
 * @array: in
 *
 * @size: si
 *
 * @action: po
 *
 * Return: no
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array && action)

		for (m = 0; m < size; m++)

			action(array[m]);
}
