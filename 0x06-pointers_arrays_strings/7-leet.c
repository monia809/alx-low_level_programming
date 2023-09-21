#include "main.h"

/**
 * leet - encode into 1337speak
 *
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int x, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[x] == s1[m])
			{
				n[x] = s2[m];
			}
		}
	}
	return (n);
}
