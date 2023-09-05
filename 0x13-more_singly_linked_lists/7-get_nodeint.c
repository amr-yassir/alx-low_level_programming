#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of the list
 * @head: pointer to the list
 * @index: the index of the node
 *
 * Return: pointer to the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
		temp = head->next;

	if (!temp)
		return (NULL);

	return (temp);
}
