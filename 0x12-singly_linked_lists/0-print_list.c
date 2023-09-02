#include "lists.h"

/**
 * print_list - function to print elements of a list
 * @h: points to list_t
 *
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
