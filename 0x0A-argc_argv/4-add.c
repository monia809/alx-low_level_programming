#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - monia
 *
 * @argc: fell
 *
 * @argv: in
 *
 * Return: love
 */

int main(int argc, char *argv[])
{
	int m, f, add = 0;

	for (m = 1; i < argc; m++)
	{
		for (f = 0; argv[m][f] != '\0'; f++)
		{
			if (!isdigit(argv[m][f]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[m]);
	}
	printf("%d\n", add);
	return (0);
}
