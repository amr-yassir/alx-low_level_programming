#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: input
 * @max: input
 * Return: p
*/

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		p[i] = j;
	return (p);
}
