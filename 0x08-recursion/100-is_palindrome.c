#include "main.h"

/**
* is_palindrome - m
*
*@s: o
*
*Return: 0
*/

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - n
 *
 * @s: i
 *
 * Return: a
 */

int find_strlen(char *s)
{
	int f = 0;

	if (*(s + f))
	{
		f++;
		f += find_strlen(s + f);
	}

	return (f);
}

/**
 * check_palindrome - C
 *
 * @s: f
 * @len: length
 *
 * @index: i
 *
 * Return: 1,0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
