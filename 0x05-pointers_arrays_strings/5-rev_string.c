#include "main.h"

/**
 * rev_string - print str in rev
 *
 * @s: input
*/

void rev_string(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar ('\n');

	while (s[l])
		l++;
	while (l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
