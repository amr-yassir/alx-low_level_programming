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
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
