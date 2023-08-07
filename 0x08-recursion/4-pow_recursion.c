#include "main.h"

/**
 * _pow_recursion - return x raised to power y
 *
 * @x; input
 * @y: input
 *
 * Return: x to power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
