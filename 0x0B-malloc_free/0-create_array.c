#include "main.h"

/**
 * create_array - create an array with specific character
 *
 * @size: input
 * @c: input
 *
 * Return: char
*/

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (0);

	ch = malloc(size * sizeof(char));

	if (ch == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
