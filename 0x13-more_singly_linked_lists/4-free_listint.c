#include "lists.h"

/**
 * free_listint - free all the list
 * @head: pointer of the header linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
