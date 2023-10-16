#include "lists.h"

/***/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *current = *h;
	unsigned int i = 0;

	if (!new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	while (current)
	{
		if (i == idx - 1)
		{
			new->prev = current;
			new->next = current->next;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
