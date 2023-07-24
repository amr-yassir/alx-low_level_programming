#include "main.h"
/**
 * print_sign - prints + if n greater than zero 0 if n is zero
 * and - if n is less than zero
 *
 * @n: Check the input
 *
 * Return: 1 if +, -1 if -, 0 if 0
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
