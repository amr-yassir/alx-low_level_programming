#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: pointer to the first element
 * @n: data of the newnode
 *
 * Return: pointer to the newnode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
