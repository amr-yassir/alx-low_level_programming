#include <stdio.h>

/**
 *
 * main - prints the size of various types
 *
 * Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("Size of a int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes\n", sizeof(long long int));
	printf("Size of a float: %d bytes\n", sizeof(float));
	return (0);
}
