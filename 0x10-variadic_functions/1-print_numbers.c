#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - ch
 *
 * @n: nu
 *
 * @separator: ch
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int m;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == m + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
