#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 *
 * @n: checks for input
 *
 * Return: n
*/

int print_last_digit(int n)
{
	int r = abs(n % 10);

	_putchar(r + '0');
	return (r);
}
