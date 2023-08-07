#include "main.h"

/**
 * is_prime_number - check if a number is a prime number
 *
 * @n: input
 * @counter: input
 *
 * Return: int
*/

int prime(int n, int counter);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checks for prime numbers
 *
 * @n: input
 * @counter: input
 *
 * Return: int
*/

int prime(int n, int counter)
{
	if (counter >= n && n > 1)
		return (1);
	else if (n % counter == 0 || n <= 1)
		return (0);
	else
		return (prime(n, counter + 1));
}
