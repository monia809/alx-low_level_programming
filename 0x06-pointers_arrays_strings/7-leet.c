#include "main.h"

/*
 * encodes a string into 1337
 *
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int l, x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[l] == s1[x])
			{
				n[l] = s2[x];
			}
		}
	}
	return (n);
}
