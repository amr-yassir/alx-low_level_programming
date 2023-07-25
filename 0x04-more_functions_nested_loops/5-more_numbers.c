#include "main.h"
/**
 * more_numbers - print n
 *
 * Return: 0 (success)
*/
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				putchar(49);
				k = j % 10;
			}
			putchar(k + 48);
		}
		putchar('\n');
	}
}
