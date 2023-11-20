#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = NULL;
	if (!head || !(*head))
		return (NULL);
	while (*head)
	{
		next_node = (*head)->next;
		/* reverse point by prev_node */
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
