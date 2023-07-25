#include "main.h"

/**
 * print_number - prints integer
 *
 * @n: check input
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	putchar((i % 10) + 48);
}
