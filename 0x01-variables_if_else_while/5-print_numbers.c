#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print numbers from 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
