#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints element of struct dog
 * @d: input
 *
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %d\n", d->age ? d->age : "(nill)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
	}
}
