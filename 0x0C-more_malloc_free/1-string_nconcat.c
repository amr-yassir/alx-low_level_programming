#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int l1, l2;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	c = malloc(l1 + n + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		c[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}

	c[i] = '\0';
	return (c);
}
