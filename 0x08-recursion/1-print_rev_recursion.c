#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in rev
 *
 * @s: input
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	int l = strlen(s);

	if (*s == 0)
		_putchar('\n');
	else
	{
		_putchar(s + l);
		_print_rev_recursion(s + l - 1);
	}
}
