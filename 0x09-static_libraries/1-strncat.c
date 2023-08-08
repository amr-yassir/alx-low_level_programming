#include "main.h"

/**
 * _strncat - merge two strings
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
