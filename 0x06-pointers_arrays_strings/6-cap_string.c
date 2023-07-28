#include "main.h"

/**
 * cap_string - cap all ward
 *
 * @str: input
 *
 * Return: string
*/

char *cap_string(char *str)
{
	int i, j;

	j = 0;
	str[0] = str[0] - 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[j] = 32)
		{
			str[j + 1] = str[j + 1] - 32;
		}
	}
	return (str);
}
