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
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
	}
}
