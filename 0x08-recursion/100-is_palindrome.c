#include "main.h"

/**
 * _strlen_recursion - do
 *
 * @s: pointer
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * find_strlen - senorita
 *
 * @s: string measured
 *
 * Return: len
 */

int find_strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += find_strlen(s + l);
	}

	return (l);
}

/**
 * check_palindrome - string is a palindrome
 *
 * @s: string
 *
 * @len: length
 *
 * @index: index of the string
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
