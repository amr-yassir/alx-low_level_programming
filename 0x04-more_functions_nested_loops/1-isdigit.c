#include "main.h"
/**
 * _isdigit - check for digits
 *
 * @c: check for input
 *
 * Return: 1 (success)
*/

int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
