#include "main.h"

/**
 * _strspn - checks for similarity
 *
 * @s: input
 * @accept: input
 *
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
