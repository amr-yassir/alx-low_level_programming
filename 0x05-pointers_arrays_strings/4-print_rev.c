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
	s = s[l];
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
