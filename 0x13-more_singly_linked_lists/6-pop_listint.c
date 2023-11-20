#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!(*head) || !head)
		return (0);
	n = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
