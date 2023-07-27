#include "main.h"

/**
 * puts_half - print second half
 *
 * @str: input
*/

void puts_half(char *str)
{
	int l = 0;
	int l2;

	while (str[l])
		l++;
	l2 = (l - 1) / 2;

	while (str[l2])
	{
		_putchar(str[l2]);
		l2++;
	}
	_putchar('\n');
}

