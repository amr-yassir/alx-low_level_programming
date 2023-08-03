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
	unsigned int itr, jtr;

	for (i = 0; s[itr] != '\0'; itr++)
	{
		for (j = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
