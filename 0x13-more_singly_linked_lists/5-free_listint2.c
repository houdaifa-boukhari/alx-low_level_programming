#include "lists.h"

/**
 * free_listint2 - free all the list
 * @head: pointer of the header linked list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	if (!(*head) || !head)	
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
