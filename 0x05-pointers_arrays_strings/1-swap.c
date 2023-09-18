#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
