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

	if (width <= 0 || height <= 0)
		return (NULL);

	l = width * height;

	n = malloc(l * sizeof(int));

	if (n == NULL)
	{
		return (NULL);
		free(n);
	}

	for (i = 0; i < l; i++)
		n[i] = 0;

	return (n);
}
