#include "main.h"

/**
 * print_line - print a street line
 *
 * @n: check input for n times _ is drawn
 *
 * Return: 0 (success)
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			putchar('_');
		putchar('\n');
	}
}
