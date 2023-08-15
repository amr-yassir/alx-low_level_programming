#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: input
 * @age: input
 * @owner: input
 *
 * Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	unsigned int l1, l2, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	for (l1 = 0; name[l1]; l1++)
		;
	l1++;

	for (l2 = 0; owner[l2]; l2++)
		;
	l2++;

	newdog->name = malloc(sizeof(char) * l1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		newdog->name[i] = name[i];

	newdog->age = age;

	newdog->owner = malloc(sizeof(char) * l2);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		newdog->owner[i] = owner[i];

	return (newdog);
}
