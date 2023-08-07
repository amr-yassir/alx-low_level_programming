#include "main.h"
#include <string>

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
		return('\n');
	else
	{
		putchar(s + l);
		_print_rev_recursion(s + l - 1);
	}
}
