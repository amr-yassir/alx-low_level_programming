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
	int coins = 0;
	int n;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}


	n = atoi(argv[1]);

	while (n % 25 == 0)
	{
		n -= 25;
		coins++;
	}

	while (n % 10 == 0)
	{
		n -= 10;
		coins++;
	}

	while (n % 5 == 0)
	{
		n -= 5;
		coins++;
	}

	while (n / 1 == n)
	{
		n -= 1;
		coins++;
	}

	printf("%d", coins);
	return (0);
}
