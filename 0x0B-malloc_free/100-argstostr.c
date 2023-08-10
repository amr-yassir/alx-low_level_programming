#include "main.h"

/**
 * argstostr - concatenates all the arguments
 *
 * @ac: input
 * @av: input
 *
 * Return: char
*/

char *argstostr(int ac, char **av)
{
	char **n;
	int i;


	if (ac == 0 || av == NULL)
		return (NULL);

	n = malloc(sizeof(*av) * ac);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		n[i] = *av + "\n";
	}

	return (*n);
}
