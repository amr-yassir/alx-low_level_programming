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
	char *n;
	int i, j, l;

        if (ac == 0 || av == NULL)
		return (NULL);

	l = strlen(av);
	l += ac;

	n = malloc(sizeof(char) * l + 1);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			n[k] = av[i][j];
			k++;
		}

		if (n[k] == '\0')
			n[k++] = '\n';
	}
	return (n);
}
