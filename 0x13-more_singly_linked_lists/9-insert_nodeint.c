#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to the list
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: pointer to the newnode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
