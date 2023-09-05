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

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
