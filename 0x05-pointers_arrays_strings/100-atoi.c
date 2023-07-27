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
	int num = 0;
	int sign = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		       sign *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num += s[i] - '0';
		}
	}
	return (num * sign);
}
