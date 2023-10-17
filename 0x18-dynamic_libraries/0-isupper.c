#include "main.h"
/**
 * _isupper - function to check uppercase characters
 *
 * @c: checks input
 *
 * Return: 1 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
