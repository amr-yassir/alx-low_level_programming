#include "main.h"

/**
 * _strdup - return a dublicated string
 *
 * @str: input
 *
 * Return: char
*/

char *_strdup(char *str)
{
	char *n;
	int length;
	int i;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	n = malloc(length * sizeof(char));

	if (n == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		n[i] = str[i];
	}

	return (n);
}
