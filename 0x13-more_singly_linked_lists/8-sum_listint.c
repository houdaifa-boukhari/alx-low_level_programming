#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the dat (n),
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
