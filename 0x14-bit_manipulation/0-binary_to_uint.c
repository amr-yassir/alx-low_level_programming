#include "main.h"

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: pointer to the binary number
 *
 * Return: the unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		uint = uint * 2 + (*b++ - 48);
	}
	return (uint);
}
