#include "function_pointers.h"

/**
 * print_name - pri
 *
 * @name: in
 *
 * @f: f
 *
 * Return: no
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)

		f(name);
}
