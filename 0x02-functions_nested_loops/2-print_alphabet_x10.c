#include "main.h"

/**
 * print_alphabet - print alphabet x10
*/

void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
