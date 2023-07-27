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

	for (l = 0; *s != '\0'; s++)
		l++;
	while (l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
