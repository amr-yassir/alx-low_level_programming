#include "lists.h"

/**
 * sum_dlistint - sum all the data of a dlistint_t linked list.
 * @head: pointer to the list
 * Return: sum of all data in the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
