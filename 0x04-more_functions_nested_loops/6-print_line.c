#include "main.h"
/**
 * print_line - function to print _
 *
 * @n: check input
 *
 * Return: 0 (success)
*/
void print_line(int n)
{
	int i;

	for(i = 1; i <= n; i++)
		putchar('_');
	putchar('\n');
}
