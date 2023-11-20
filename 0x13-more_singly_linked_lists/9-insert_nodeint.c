#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1;
	listint_t *new_node;
	listint_t *ptr2;

	if (!head)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (idx == 0)
	{
		add_nodeint(&(*head), n);
		return (*head);
	}
	new_node->n = n;
	ptr1 = *head;
	while (ptr1 && idx > 1)
	{
		ptr1 = ptr1->next;
		idx--;
	}
	if (!ptr1)
	{
		free(new_node);
		return (NULL);
	}
	ptr2 = ptr1->next;
	ptr1->next = new_node;
	new_node->next = ptr2;
	return (*head);
}
