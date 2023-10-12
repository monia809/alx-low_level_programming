#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - p
 *
 * @n: num
 *
 * @separator: char
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int o;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(string, n);

	for (o = 0; o < n; o++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == o + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
