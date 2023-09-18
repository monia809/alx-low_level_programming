#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int long x = 0;
	int o;

	while (*s != '\0')
	{
		long x++;
		s++;
	}
	s--;
	for (o = long x; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
