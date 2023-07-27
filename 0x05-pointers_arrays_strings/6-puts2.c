#include "main.h"

/**
 * puts2 - print every other char
 *
 * @str: input
*/

void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
