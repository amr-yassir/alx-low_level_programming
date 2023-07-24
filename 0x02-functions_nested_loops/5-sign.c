#include "main.h"
/**
 * print_sign - prints the sign of n
 *
 * @c: Check the input
 *
 * Return: 1 +, -1 -, 0 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
