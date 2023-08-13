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
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		m[i] = 0;

	return (m);
}
