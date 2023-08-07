#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input
 *
 * Return: i
*/

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		;
	else
	{
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
