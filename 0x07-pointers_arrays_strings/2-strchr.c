#include "main.h"

/**
 * _strchr - detect the first occur
 *
 * @s: input
 * @c: input
 *
 * Return: a
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char a[];

	while (s[i])
	{
		if (s[i] == c)
		{
			for (int j = 0; s[i] != '\0'; j++)
			{
				a[j] = s[i];
			}
			break;
		}
		i++;
	}

	return (a);
}
