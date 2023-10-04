#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - no
 *
 * @width: no
 *
 * @height: no
 *
 * Return: no
 */

int **alloc_grid(int width, int height)
{
	int **array, m, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == 0)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		array[m] = (int *)malloc(sizeof(int) * width);
		if (array[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(array[m]);
			free(array);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (j = 0; j < width; j++)
			array[m][j] = 0;

	return (array);
}
