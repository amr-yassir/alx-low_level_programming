#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position.
 * @head: pointer to the list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!*head)
		return (-1);

	for (; index != 0; index--)
	{
		if (!current)
			return (-1);
		current = current->next;
	}

	if (current == *head)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
