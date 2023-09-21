#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes strings using rot13

 *@s: pointer to string
 *
 *Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int s, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = 0;
	while (strs[s] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[s] == alpha[j])
			{
				str[s] = rot[j];
				break;
			}
			j++;
		}
		s++;
	}
	return (str);
}
