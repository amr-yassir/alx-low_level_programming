#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: check input
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
