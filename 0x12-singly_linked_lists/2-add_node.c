#include "lists.h"

/**
 * add_node - adds new node at the beginning of the list
 * @head: double pointer to list_t
 * @str: new string
 *
 * Return: address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i = 0;

	while (str[i])
		i++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
