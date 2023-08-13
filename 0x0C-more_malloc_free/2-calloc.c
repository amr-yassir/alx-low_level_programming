#include "main.h"

/**
 * _calloc - allocates memory of an array
 *
 * @nmemb: input
 * @size: input
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *m;
	unsigned i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		m[i] = 0;

	return (m);
}
