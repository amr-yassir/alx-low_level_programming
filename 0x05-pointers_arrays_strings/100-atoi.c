#include "main.h"

/**
 * _atoi - convert
 * 
 * @s: input
 *
 * Return: num
*/

int _atoi(char *s)
{
	int i;
	int num;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		       _putchar('-');
		while (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num += s[i];
		}
	}
	_putchar('\n');
	return (num);
}
