#include "lists.h"

/***/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int i;

	for (i = 0; i < index; i++)
		current = current->next;
	return (current);
}
