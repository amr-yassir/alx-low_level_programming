#include "main.h"
/***/
void print_to_98(int n)
{
	int k;
	for (k = n; k <= 98; k++)
	{
		printf("%d", k);
		_putchar(',');
		_putchar(' ');
	}
}
