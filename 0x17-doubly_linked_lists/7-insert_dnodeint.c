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
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (current)
	{
		if (current->next->next == NULL)
			return (add_dnodeint_end(h, n));
		else if (i == idx - 1)
		{

			new->n = n;
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
