#include "main.h"

/**
 * _strlen - calculate length
 *
 * @s: check input
 *
 * Return: length
*/

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		l++;

	return (l);
}
