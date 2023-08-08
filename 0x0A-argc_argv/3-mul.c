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
	int mult;

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
