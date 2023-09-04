#include "lists.h"

/**
 * free_listint2 - freees the list
 * @head: pointer to the list
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = *(head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL:
}
