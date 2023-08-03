#include "main.h"

/**
 * print_diagsums - print diagonals sum of a square
 *
 * @a: input
 * @size: input
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j = i; j++)
		{
			sum += a[j];
		}
	}
	printf("%d", sum);
}
