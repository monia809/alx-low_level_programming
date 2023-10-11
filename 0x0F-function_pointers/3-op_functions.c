#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - you
 *
 * @a: can
 *
 * @b: do
 *
 * Return: it
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a
 *
 * @a: a
 *
 * @b: a
 *
 * Return: void
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a
 *
 * @a: a
 *
 * @b: a
 *
 * Return: T
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a
 *
 * @a: an
 *
 * @b: an in
 *
 * Return: T
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");

		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a func
 *
 * @a: an in
 *
 * @b: an in
 *
 * Return: void
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");

		exit(100);
	}
	return (a % b);
}
