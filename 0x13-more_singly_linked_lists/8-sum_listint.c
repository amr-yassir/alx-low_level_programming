#include "lists.h"

/**
 * sum_listint - returns the sum of all data in a list
 * @head: pointer to the list
 *
 * Return: the sum of all data in the list
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!temp)
		return (0);
	while (temp)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
