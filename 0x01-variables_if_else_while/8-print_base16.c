#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: print numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');
	return (0);
}
