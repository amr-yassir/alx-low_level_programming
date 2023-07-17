#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: print digits
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
