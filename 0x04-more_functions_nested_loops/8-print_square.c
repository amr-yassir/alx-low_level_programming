#include "main.h"

/**
 * print_square - print square of #
 * @size: check input
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
