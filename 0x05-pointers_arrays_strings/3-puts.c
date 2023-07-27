#include "main.h"

/**
 * _puts - print string
 *
 * @str: check input
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
		printf("%c", *str);
	_putchar ('\n');
}
