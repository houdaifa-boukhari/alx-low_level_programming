#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (!head)
		return (NULL);
	ptr = head;
	while (ptr && index--)
		ptr = ptr->next;
	add_nodeint(&head, ptr->n);
	return (head);
}
