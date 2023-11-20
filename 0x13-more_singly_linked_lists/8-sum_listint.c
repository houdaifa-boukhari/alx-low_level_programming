#include "lists.h"

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
