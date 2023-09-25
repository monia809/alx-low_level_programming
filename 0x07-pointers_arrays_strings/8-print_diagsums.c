#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *
 *@a: first value -char
 *@size: second value -int
 */

void print_diagsums(int *a, int size)
{
	int m1, m2, y;

	m1 = 0;
	m2 = 0;

	for (y = 0; y < size; y++)
	{
		m1 = m1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		m2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", m1, m2);
}
