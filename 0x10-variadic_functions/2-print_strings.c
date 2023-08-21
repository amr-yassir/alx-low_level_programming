#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of strings
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (i--)
		printf("%s%s", (str = va_arg(p, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
		va_end(p);
}
