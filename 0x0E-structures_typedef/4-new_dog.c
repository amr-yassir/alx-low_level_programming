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
	dog_t *dog;
	unsigned int l1, l2, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (l1 = 0; name[l1]; l1++)
		;
	l1++;

	for (l2 = 0; owner[l2]; l2++)
		;
	l2++;

	newdog->name = malloc(sizeof(char) * l1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(sizeof(char) * l2);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
