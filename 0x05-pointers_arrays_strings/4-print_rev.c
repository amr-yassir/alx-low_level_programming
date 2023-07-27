#include "main.h"

/**
 * print_rev - print in reverse
 *
 * @s: input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int l;

	while (s[l])
		l++;
	while (l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
