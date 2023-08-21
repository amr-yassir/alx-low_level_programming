#include "variadic_functions.h"

/***/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i = n;

	if (n)

