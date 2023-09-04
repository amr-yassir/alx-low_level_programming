#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: a singly lisked list
 *
 * Return: length of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
