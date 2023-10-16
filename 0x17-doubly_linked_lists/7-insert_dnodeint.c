#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the list
 * @idx: index
 * @n: value
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *current = *h;
	unsigned int i = 0;

	if (!new)
		return (new ? free(new), NULL : NULL);

	while (current)
	{
		if (i == idx - 1)
		{
			new->n = n
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
