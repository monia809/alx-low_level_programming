#include "main.h"

/**
 *print_number - prints an integer
 *
 *only using the putchar function
 *
 *noarrays and pointers
 *
 *@n: integer to be printed.
 *
 *Return: void.
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
