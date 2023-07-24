#include "main.h"
/**
 * _islower - check for lowercase characters
 *
 * 0c: checks input
 *
 * Return: return 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
