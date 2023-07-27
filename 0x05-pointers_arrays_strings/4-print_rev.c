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
	for (s = l; *s != '\0'; s--)
		_putchar(*s);
	_putchar('\n');
}
