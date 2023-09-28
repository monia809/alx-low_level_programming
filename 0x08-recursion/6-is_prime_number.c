#include "main.h"

/**
 *evaluate_num - oh
 *
 *@num: my god
 *
 *@iterator: wow
 *
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * actual_prime - m
 *
 * @n: number to evaluate
 *
 * @i: iterator
 *
 * Return: 1,0
 */

int actual_prime(int n, int f)
{
	if (f == 1)
	{
		return (1);
	}
	if (n % f == 0 && f > 0)
	{
		return (0);
	}
	return (actual_prime(n, f - 1));
}
