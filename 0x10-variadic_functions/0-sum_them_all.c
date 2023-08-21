#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all arguments
 * @n: number of arguments
 * Return: the sum*/

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int i = n, sum = 0;

	if (!n)
		return (0);
	va_start(p, n);
	while (i--)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
