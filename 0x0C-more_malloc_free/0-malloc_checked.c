#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: input
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		return (98);

	return (m);
}
