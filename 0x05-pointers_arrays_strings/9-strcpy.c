#include "main.h"

/**
 * *_strcpy - function to copy
 *
 * @dest: input
 * @src: input
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (*src = '\0')
		dest[i] = src[i];
	return (dest);
}
