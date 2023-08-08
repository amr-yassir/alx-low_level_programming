#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: input
 * @argv: input
 *
 * Return: int
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
