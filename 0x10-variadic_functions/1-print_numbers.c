#include "variadic_functions.h"

/**
 * print_numbers - print numbers 
 * @seperator: seperator
 * @n: number of arguments
 * @...: the numbers
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i = n;

	if (!n)
		printf("\n"), return;
	va_start(p, n);
	while (i--)
		printf("%d%s", va_arg(p, int),
				i ? (seperator ? seperator : "") : "\n");
	va_end(p);
}

