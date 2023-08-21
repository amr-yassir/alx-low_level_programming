#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: type of argument
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0, c = 0, j;
	char *str, arg[] = "ifcs";

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(p, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(p, double)), c = 1;
				break;
			case 'c':
				printf("%c", va_arg(p, int)), c = 1;
				break;
			case 's':
				str = va_arg(p, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(p);
}
