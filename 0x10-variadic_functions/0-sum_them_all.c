#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - ch
 *
 * @n: num
 *
 * Return: the sum of all its parameters, If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int m;

	va_start(valist, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
