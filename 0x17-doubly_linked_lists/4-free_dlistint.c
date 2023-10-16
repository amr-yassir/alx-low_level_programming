#include "lists.h"

/***/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
