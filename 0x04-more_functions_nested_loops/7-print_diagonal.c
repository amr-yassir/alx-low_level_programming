#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: check input
 *
 * Return: 0 (success)
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
	return (0);
}
