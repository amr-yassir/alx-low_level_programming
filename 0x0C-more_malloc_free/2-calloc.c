#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: input
 * @size: input
 * Return: p
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;
	return (p);
}
