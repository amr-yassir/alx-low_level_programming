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
	int l;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	l = width * height;

	n = malloc(l * sizeof(int));

	if (n == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			n[i][j] = 0;

	return (n);
}
