#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @n: input string
 *
 * Return: caps on first letter of a separator
 */

char *cap_string(char *str)
{
	int e = 0;

	while (str[e])
	{
		while (!(str[e] >= 'a' && str[e] <= 'z'))
			e++;

		if (str[e - 1] == ' ' ||
		    str[e - 1] == '\t' ||
		    str[e - 1] == '\n' ||
		    str[e - 1] == ',' ||
		    str[e - 1] == ';' ||
		    str[e - 1] == '.' ||
		    str[e - 1] == '!' ||
		    str[e - 1] == '?' ||
		    str[e - 1] == '"' ||
		    str[e - 1] == '(' ||
		    str[e - 1] == ')' ||
		    str[e - 1] == '{' ||
		    str[e - 1] == '}' ||
		    e == 0)
			str[e] -= 32;

		e++;
	}

	return (str);
}
