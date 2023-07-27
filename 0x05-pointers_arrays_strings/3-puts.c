#include "main.h"

/**
 * _puts - print string
 *
 * @str: check input
 *
 * Return: 0 (success)
*/

void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
		_putchar(*str + 0);
	_putchar ('\n');
}
