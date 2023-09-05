#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: double pointer to the list
 * @index: index to the node to be deleted 
 *
 * Return: 1 on success, 0 on fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	list_t *temp = *head;
	list_t *current = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
