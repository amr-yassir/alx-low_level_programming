#include "main.h"

/**
 * main - Entry point
 * @argc: input
 * @argv: input
 * Return: int
*/

int main(int argc, int *argv[])
{
	int i, j;
	unsigned long mult;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mult = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mult);
	return (0);
}
