#include "function_pointers.h"

/**
 * int_index - search
 *
 * @array: i
 *
 * @size: s
 *
 * @cmp: poooo
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (m = 0; m < size; m++)

			if (cmp(array[m]))

				return (m);
	}

	return (-1);
}
