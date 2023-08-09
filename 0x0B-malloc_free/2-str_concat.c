#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: input
 * @s2: input
 *
 * Return: char
*/

char *str_concat(char *s1, char *s2)
{
	char *n;
	int l1, l2, l;
	int i, j;

	l1 = strlen(s1);
	l2 = strlen(s2);
	l = l1 + l2 + 1;

	n = malloc(l * sizeof(char));

	for (i = 0; i < l1; i++)
	{
		n[i] = s1[i];
	}

	for (j = 0; j < l2; j++)
	{
		n[j+l1] = s2[j];
	}

	return (n);
}
