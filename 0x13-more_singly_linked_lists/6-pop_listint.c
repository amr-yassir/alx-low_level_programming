#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the list
 *
 * Return: the head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
