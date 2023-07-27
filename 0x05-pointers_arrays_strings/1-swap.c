#include "main.h"

/**
 * swap_int - swap two numbers
 *
 * @a: check input
 * @b: check input
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
