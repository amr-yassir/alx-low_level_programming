#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m;
	int count = 0;

	while (temp)
	{
		if (temp & 1ul)
			count++;
		temp = temp >> 1;
	}

	return (count);
}
