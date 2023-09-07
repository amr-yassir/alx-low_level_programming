#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
*/

void print_binary(unsigned long int n)
{
	unsigned int mask = 0x80;	/*1000 0000*/
	int i;

	for (i = 0; i < (8 * sizeof(n)); i++)
	{
		if (n & mask >> 1)
			printf("1");
		else
			printf("0");
	}
}

