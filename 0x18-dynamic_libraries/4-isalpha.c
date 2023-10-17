#include "main.h"

/**
 * _isalpha - checks for a character
 *
 * @c: checks for input
 *
 * Return: 1 if letter
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
