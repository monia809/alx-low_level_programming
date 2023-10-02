#include <stdio.h>
#include <stdlib.h>

/**
 * main - f
 *
 * @argc: ?
 *
 * @argv: m
 *
 * Return: yes ofcourse
 */

int main(int argc, char *argv[])
{
	int m, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);

	while (m > 0)
	{
		if (m >= 25)
			m -= 25;
		else if (m >= 10)
			m -= 10;
		else if (m >= 5)
			m -= 5;
		else if (m >= 2)
			m -= 2;
		else if (m >= 1)
			m -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
