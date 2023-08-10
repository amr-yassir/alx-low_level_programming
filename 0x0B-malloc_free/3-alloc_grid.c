#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: input
 * @height: input
 *
 * Return: int
*/

int **alloc_grid(int width, int height)
{
	int **n;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(height * sizeof(*n));

	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(**n));
		if (n[i] == 0)
		{
			while (i--)
				free(n[i]);
			free(n);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			n[i][j] = 0;
	}

	return (n);
}
