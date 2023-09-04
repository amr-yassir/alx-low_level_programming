#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: pointer to the first node
 * @n: data of the newnode
 *
 * Return: pointer to the newnode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
