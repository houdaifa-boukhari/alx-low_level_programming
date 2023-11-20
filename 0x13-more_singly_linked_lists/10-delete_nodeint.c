#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: 1 (success) or -1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1;
	listint_t *ptr2;

	if (!head || !(*head))
		return (-1);
	ptr1 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr1);
		return (1);
	}
	while (ptr1 && index > 1)
	{
		ptr1 = ptr1->next;
		index--;
	}
	ptr2 = ptr1->next->next;
	free(ptr1->next);
	ptr1->next = ptr2;
	return (1);
}
