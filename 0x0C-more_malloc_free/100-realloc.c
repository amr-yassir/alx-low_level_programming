#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_sizee;
	for (i = 0; i < max; i++)
		p[i] = ptr[i];
	free(ptr);
	return (p);
}
