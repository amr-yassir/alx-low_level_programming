#include "main.h"

/**
 * _sqrt_recursion - calc the square root of a number
 *
 * @n: input
 *
 * Return: square root of n
*/

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - function to calculate the square root
 *
 * @n: input
 *
 * @val: input
 *
 * Return: int
*/

int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return(-1);
}
