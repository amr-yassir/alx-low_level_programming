#include "main.h"

/**
 * print_array - prints n elements of array
 *
 * @a: input
 * @n: input
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n)
			printf(", ");
	}
}
